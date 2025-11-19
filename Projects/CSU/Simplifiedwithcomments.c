// This program is a simple compiler/interpreter for a subset of C-like language.
// It parses variable declarations and expressions, generates MIPS assembly code,
// and then converts that assembly to binary machine code representations.
// It reads from "input.txt" and outputs assembly with corresponding binary codes.

// Include necessary standard libraries for input/output, memory management, string handling, character classification, and variable arguments.
#include <stdio.h>      // For printf, fprintf, fgets, fopen, etc.
#include <stdlib.h>     // For malloc, free, exit, atoi, etc.
#include <string.h>     // For strcpy, strcmp, strlen, memmove, etc.
#include <ctype.h>      // For isspace, isalpha, isalnum, isdigit, etc.
#include <stdarg.h>     // For va_list, va_start, va_end, vsnprintf (used in emit function).

// Define constants for maximum sizes to prevent buffer overflows.
#define MAX_LINE 256   // Maximum length of a line read from input.
#define MAX_VARS 200   // Maximum number of variables that can be declared.
#define MAX_TOKEN 32   // Maximum length of a token (e.g., variable name or operator).

// Define a structure to represent a variable, storing its name and assigned register.
typedef struct {
    char name[50];     // Name of the variable (up to 49 characters + null terminator).
    int reg;           // Register number assigned to this variable.
} Variable;

// Array to hold all declared variables, with a counter for the number of variables.
Variable vars[MAX_VARS];  // Static array of variables.
int varCount = 0;         // Current number of variables declared.
int regCounter = 1;       // Counter for assigning new register numbers (starts at 1, assuming r0 is reserved).
int lineNumber = 0;       // Current line number being processed from the input file.

// Define a structure for nodes in an expression tree (used for parsing expressions).
typedef struct Node {
    char tok[MAX_TOKEN];   // Token stored in this node (e.g., number, variable, or operator).
    struct Node *left, *right;  // Pointers to left and right child nodes.
} Node;

// ========== UTILITY FUNCTIONS ==========

// Function to trim leading and trailing whitespace from a string in place.
void trim(char *s) {
    // Find the first non-space character.
    char *start = s;
    while (isspace(*start)) start++;  // Skip leading spaces.
    // Move the trimmed string to the beginning if there were leading spaces.
    if (start != s) memmove(s, start, strlen(start) + 1);

    // Find the last non-space character and null-terminate there.
    char *end = s + strlen(s) - 1;
    while (end >= s && isspace(*end)) *end-- = '\0';
}

// Function to check if a string is a valid identifier (starts with letter, followed by letters, digits, or underscores).
int isValidIdentifier(const char *s) {
    if (!s || !s[0] || !isalpha(s[0])) return 0;  // Must start with a letter and not be empty.
    int i;
	for (i = 1; s[i]; i++)  // Check each subsequent character.
        if (!isalnum(s[i]) && s[i] != '_') return 0;  // Only alphanumeric or underscore allowed.
    return 1;  // Valid identifier.
}

// ========== VARIABLE MANAGEMENT ==========

// Function to find the register of a variable by name. Returns register number or -1 if not found.
int findVar(const char *name) {
	int i;
    for (i = 0; i < varCount; i++)  // Loop through all declared variables.
        if (strcmp(vars[i].name, name) == 0) return vars[i].reg;  // Match found, return register.
    return -1;  // Not found.
}

// Function to declare a new variable with a given name and register. Adds to vars array.
int declareVar(const char *name, int reg) {
    if (varCount >= MAX_VARS) {  // Check if we've exceeded the maximum number of variables.
        fprintf(stderr, "Too many variables\n");  // Error message to stderr.
        exit(1);  // Exit program with error code.
    }
    strcpy(vars[varCount].name, name);  // Copy name to the new variable entry.
    vars[varCount].reg = reg;  // Assign the register.
    varCount++;  // Increment variable count.
    return reg;  // Return the assigned register.
}

// Function to get a new temporary register number. Increments regCounter each time.
int newTemp() {
    return regCounter++;  // Return current counter and increment for next use.
}

// ========== MACHINE CODE GENERATION ==========

// Function to parse a MIPS assembly line and print its binary machine code representation.
// Supports specific instructions: daddiu, daddu, dsubu, dmult, ddiv, mflo, sb, lb.
void printMachineCode(const char *line) {
    int rd, rs, rt, imm;  // Variables to hold parsed register numbers and immediates.
    char varname[50];     // Buffer for variable name in load/store instructions.
    unsigned int code = 0;  // 32-bit machine code to be built.
    char type = 'U';      // Type of instruction: 'R' for R-type, 'I' for I-type, 'U' for unknown.

    // Try to match and parse different instruction formats.
    if (sscanf(line, "daddiu r%d, r%d, %d", &rd, &rs, &imm) == 3) {  // I-type: daddiu rd, rs, imm
        code = (0x19 << 26) | (rs << 21) | (rd << 16) | (imm & 0xFFFF);  // Build opcode: 19 (daddiu), rs, rd, imm.
        type = 'I';  // I-type instruction.
    }
    else if (sscanf(line, "daddu r%d, r%d, r%d", &rd, &rs, &rt) == 3) {  // R-type: daddu rd, rs, rt
        code = (rs << 21) | (rt << 16) | (rd << 11) | 0x2D;  // rs, rt, rd, function code 0x2D.
        type = 'R';  // R-type instruction.
    }
    else if (sscanf(line, "dsubu r%d, r%d, r%d", &rd, &rs, &rt) == 3) {  // R-type: dsubu rd, rs, rt
        code = (rs << 21) | (rt << 16) | (rd << 11) | 0x2B;  // rs, rt, rd, function code 0x2B.
        type = 'R';
    }
    else if (sscanf(line, "dmult r%d, r%d", &rs, &rt) == 2) {  // R-type: dmult rs, rt
        code = (rs << 21) | (rt << 16) | 0x18;  // rs, rt, function code 0x18.
        type = 'R';
    }
    else if (sscanf(line, "ddiv r%d, r%d", &rs, &rt) == 2) {  // R-type: ddiv rs, rt
        code = (rs << 21) | (rt << 16) | 0x1A;  // rs, rt, function code 0x1A.
        type = 'R';
    }
    else if (sscanf(line, "mflo r%d", &rd) == 1) {  // R-type: mflo rd
        code = (rd << 11) | 0x12;  // rd, function code 0x12.
        type = 'R';
    }
    else if (sscanf(line, "sb r%d, %49[^(](r0)", &rt, varname) == 2) {  // I-type: sb rt, varname(r0)
        code = (0x28 << 26) | (rt << 16);  // Opcode 0x28 (sb), rt, offset (assumed 0 for simplicity).
        type = 'I';
    }
    else if (sscanf(line, "lb r%d, %49[^(](r0)", &rt, varname) == 2) {  // I-type: lb rt, varname(r0)
        code = (0x20 << 26) | (rt << 16);  // Opcode 0x20 (lb), rt, offset (assumed 0).
        type = 'I';
    }
    else {  // Unrecognized instruction.
        printf("00000000000000000000000000000000\n");  // Print all zeros for unknown.
        return;
    }

    // Print the 32-bit binary code with spaces for readability based on instruction type.
    int i;
    for (i = 31; i >= 0; i--) {  // Loop from MSB to LSB.
        printf("%c", (code & (1u << i)) ? '1' : '0');  // Print '1' or '0'.
        if (type == 'R' && (i == 26 || i == 21 || i == 16 || i == 11 || i == 6))  // Add spaces at field boundaries for R-type.
            printf(" ");
        else if (type == 'I' && (i == 26 || i == 21 || i == 16))  // Add spaces for I-type.
            printf(" ");
    }
    printf("\n");  // Newline after binary output.
}

// Function to emit (print) an assembly instruction and its corresponding machine code.
// Uses variable arguments to format the instruction string.
void emit(const char *fmt, ...) {
    char buf[256];  // Buffer to hold the formatted assembly string.
    va_list args;   // Variable argument list.
    va_start(args, fmt);  // Initialize args with fmt.
    vsnprintf(buf, sizeof(buf), fmt, args);  // Format the string into buf.
    va_end(args);   // Clean up args.

    // Remove trailing newline if present.
    int len = strlen(buf);
    if (len > 0 && buf[len - 1] == '\n') buf[len - 1] = '\0';

    // Print the assembly instruction left-aligned in 30 characters, followed by " --> ", then the binary code.
    printf("%-30s --> ", buf);
    printMachineCode(buf);  // Call to generate and print binary.
}

// ========== EXPRESSION PARSING ==========

// Function to get the precedence of an operator for expression parsing.
int precedence(char op) {
    if (op == '+' || op == '-') return 1;  // Lower precedence for + and -.
    if (op == '*' || op == '/') return 2;  // Higher precedence for * and /.
    return 0;  // Default for non-operators.
}

// Function to check if a character is an operator.
int isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/';  // Only these four operators supported.
}

// Function to validate an expression string for syntax correctness.
int validateExpression(const char *expr) {
    int parenCount = 0;     // Counter for parentheses balance.
    int expectOperand = 1;  // Flag: true if we expect an operand next.
	
	const char *p;
    for (p = expr; *p; p++) {  // Iterate through each character.
        if (isspace(*p)) continue;  // Skip whitespace.

        if (isdigit(*p)) {  // If digit, parse the number.
            while (isdigit(*p)) p++;  // Skip the rest of the number.
            if (isalpha(*p) || *p == '_') return 0;  // Invalid if followed by letter/underscore.
            p--;  // Back up to last digit.
            expectOperand = 0;  // Now expect operator.
        }
        else if (isalpha(*p) || *p == '_') {  // If identifier start.
            while (isalnum(*p) || *p == '_') p++;  // Skip the identifier.
            p--;  // Back up.
            expectOperand = 0;  // Expect operator next.
        }
        else if (*p == '(') {  // Opening parenthesis.
            parenCount++;  // Increment count.
            expectOperand = 1;  // Expect operand inside.
        }
        else if (*p == ')') {  // Closing parenthesis.
            if (parenCount <= 0) return 0;  // Unmatched closing.
            parenCount--;  // Decrement count.
            expectOperand = 0;  // After ), expect operator.
        }
        else if (isOperator(*p)) {  // If operator.
            if (expectOperand) return 0;  // Operator where operand expected.
            expectOperand = 1;  // Now expect operand.
        }
        else {
            return 0;  // Invalid character.
        }
    }
    return parenCount == 0 && !expectOperand;  // Valid if parentheses balanced and ends with operand.
}

// Function to convert infix expression to postfix notation using a stack.
int infixToPostfix(const char *expr, char output[][MAX_TOKEN]) {
    char stack[256];  // Stack for operators.
    int top = -1;     // Stack top index.
    int outCount = 0; // Number of tokens in output.
	
	int i;
    for (i = 0; expr[i]; i++) {  // Iterate through expression.
        if (isspace(expr[i])) continue;  // Skip spaces.

        if (isdigit(expr[i])) {  // Number token.
            int j = 0;
            while (isdigit(expr[i])) output[outCount][j++] = expr[i++];  // Copy digits.
            output[outCount][j] = '\0';
            outCount++;  // Add to output.
            i--;  // Back up.
        }
        else if (isalpha(expr[i]) || expr[i] == '_') {  // Identifier token.
            int j = 0;
            while (isalnum(expr[i]) || expr[i] == '_') output[outCount][j++] = expr[i++];
            output[outCount][j] = '\0';
            outCount++;
            i--;
        }
        else if (expr[i] == '(') {  // Push '(' to stack.
            stack[++top] = '(';
        }
        else if (expr[i] == ')') {  // Pop until '('.
            while (top >= 0 && stack[top] != '(') {
                sprintf(output[outCount++], "%c", stack[top--]);  // Pop operator to output.
            }
            if (top >= 0) top--;  // Pop '('.
        }
        else if (isOperator(expr[i])) {  // Operator.
            while (top >= 0 && isOperator(stack[top]) &&
                   precedence(stack[top]) >= precedence(expr[i])) {  // Pop higher/equal precedence.
                sprintf(output[outCount++], "%c", stack[top--]);
            }
            stack[++top] = expr[i];  // Push current operator.
        }
    }

    while (top >= 0) {  // Pop remaining operators.
        sprintf(output[outCount++], "%c", stack[top--]);
    }

    return outCount;  // Return number of tokens in postfix.
}

// ========== EXPRESSION TREE ==========

// Function to create a new node for the expression tree.
Node* newNode(const char *tok) {
    Node *n = malloc(sizeof(Node));  // Allocate memory for node.
    strcpy(n->tok, tok);             // Copy token.
    n->left = n->right = NULL;       // Initialize children to NULL.
    return n;                        // Return new node.
}

// Function to build an expression tree from postfix tokens.
Node* buildTree(char postfix[][MAX_TOKEN], int count) {
    Node *stack[512];  // Stack for tree nodes.
    int top = -1;      // Stack top.
	
	int i;
    for (i = 0; i < count; i++) {  // Process each postfix token.
        if (isOperator(postfix[i][0]) && postfix[i][1] == '\0') {  // If operator.
            Node *right = stack[top--];  // Pop right operand.
            Node *left = stack[top--];   // Pop left operand.
            Node *op = newNode(postfix[i]);  // Create operator node.
            op->left = left;  // Set left child.
            op->right = right;  // Set right child.
            stack[++top] = op;  // Push operator node.
        } else {  // Operand (number or variable).
            stack[++top] = newNode(postfix[i]);  // Push operand node.
        }
    }

    return top >= 0 ? stack[top] : NULL;  // Return root of tree or NULL if error.
}

// Function to free the memory of an expression tree recursively.
void freeTree(Node *root) {
    if (!root) return;  // Base case: NULL node.
    freeTree(root->left);   // Free left subtree.
    freeTree(root->right);  // Free right subtree.
    free(root);             // Free current node.
}

// ========== CODE GENERATION ==========

// Function to generate MIPS assembly code from an expression tree.
// Recursively traverses the tree and emits instructions.
// targetReg is the register to store the result in, or 0 to use a new temp.
int generateCode(Node *root, int targetReg) {
    if (!root) return -1;  // Error: NULL root.

    // Check if leaf node (operand).
    if (!isOperator(root->tok[0]) || root->tok[1] != '\0') {
        if (isdigit(root->tok[0])) {  // Number literal.
            int reg = targetReg ? targetReg : newTemp();  // Use target or new temp.
            emit("daddiu r%d, r0, %d\n", reg, atoi(root->tok));  // Load immediate.
            return reg;  // Return register.
        } else {  // Variable.
            int varReg = findVar(root->tok);  // Find variable's register.
            if (varReg == -1) {  // Error: undefined variable.
                printf("Error in line %d\n", lineNumber);
                return -1;
            }
            int reg = newTemp();  // New temp for loading.
            emit("lb r%d, %s(r0)\n", reg, root->tok);  // Load byte from memory.
            return reg;
        }
    }

        // Operator node: generate code for children.
    // This block handles binary operations by recursively generating code for left and right subtrees.
    // The order of evaluation is adjusted if the right subtree is an operator to ensure correct precedence.
    int left, right;
    if (root->right && isOperator(root->right->tok[0])) {  // If right child is an operator, evaluate right first.
        right = generateCode(root->right, 0);  // Generate code for right subtree, no target register specified.
        if (right == -1) return -1;  // Error in right subtree.
        left = generateCode(root->left, 0);   // Then generate code for left subtree.
        if (left == -1) return -1;  // Error in left subtree.
    } else {  // Otherwise, evaluate left first (standard left-to-right for same precedence).
        left = generateCode(root->left, 0);   // Generate code for left subtree.
        if (left == -1) return -1;  // Error in left subtree.
        right = generateCode(root->right, 0); // Then generate code for right subtree.
        if (right == -1) return -1;  // Error in right subtree.
    }

    // Determine the result register: use targetReg if specified, otherwise allocate a new temporary.
    int result = targetReg ? targetReg : newTemp();
    char op = root->tok[0];  // Get the operator character.

    // Emit the appropriate MIPS instruction based on the operator.
    if (op == '*') {  // Multiplication: use dmult and mflo.
        emit("dmult r%d, r%d\n", left, right);  // Multiply left and right registers.
        emit("mflo r%d\n", result);             // Move result from LO register to result register.
    } else if (op == '/') {  // Division: use ddiv and mflo.
        emit("ddiv r%d, r%d\n", left, right);   // Divide left by right.
        emit("mflo r%d\n", result);             // Move quotient from LO to result register.
    } else if (op == '+') {  // Addition: use daddu.
        emit("daddu r%d, r%d, r%d\n", result, left, right);  // Add left and right.
    } else if (op == '-') {  // Subtraction: use dsubu.
        emit("dsubu r%d, r%d, r%d\n", result, left, right);  // Subtract right from left.
    }

    return result;  // Return the register holding the result.
}

// ========== DECLARATION HANDLING ==========

// Function to handle variable declarations (e.g., "int a, b = 5;").
// Parses the line, declares variables, and generates code for initializations.
int handleDeclaration(char *line) {
    if (strncmp(line, "int ", 4) != 0) return 0;  // Not a declaration, return 0.

    char *p = line + 4;  // Skip "int " prefix.
    while (*p) {  // Process each declaration item separated by commas.
        while (isspace(*p)) p++;  // Skip whitespace.
        if (!*p) break;  // End of line.

        // Extract the next declaration item (e.g., "a" or "b = 5").
        char item[MAX_LINE] = {0};
        int j = 0;
        while (*p && *p != ',') item[j++] = *p++;  // Copy until comma or end.
        if (*p == ',') p++;  // Skip the comma.
        trim(item);  // Trim whitespace from the item.

        // Remove trailing semicolon if present.
        int len = strlen(item);
        if (len > 0 && item[len - 1] == ';') item[len - 1] = '\0';
        trim(item);  // Trim again.

        // Check for assignment (presence of '=').
        char *eq = strchr(item, '=');
        if (eq) {  // Assignment declaration (e.g., "a = 5").
            *eq = '\0';  // Split at '='.
            char varname[MAX_TOKEN], expr[MAX_LINE];
            strcpy(varname, item);  // Variable name before '='.
            strcpy(expr, eq + 1);   // Expression after '='.
            trim(varname);  // Trim name.
            trim(expr);     // Trim expression.

            // Validate variable name and expression.
            if (!isValidIdentifier(varname) || !validateExpression(expr)) {
                printf("Error in line %d\n", lineNumber);  // Print error with line number.
                continue;  // Skip this declaration.
            }

            // Convert expression to postfix and build tree.
            char postfix[256][MAX_TOKEN];
            int count = infixToPostfix(expr, postfix);
            Node *tree = buildTree(postfix, count);
            if (!tree) {  // Error building tree.
                printf("Error in line %d\n", lineNumber);
                continue;
            }

            // Generate code for the expression, storing result in a new register.
            int resReg = generateCode(tree, 0);
            freeTree(tree);  // Free the tree memory.
            if (resReg == -1) continue;  // Error in code generation.

            // Declare the variable and store its value in memory.
            declareVar(varname, resReg);
            emit("sb r%d, %s(r0)\n", resReg, varname);  // Store byte to memory location.
        } else {  // Simple declaration without assignment (e.g., "a").
            // Validate the identifier.
            if (!isValidIdentifier(item)) {
                printf("Error in line %d\n", lineNumber);
                continue;
            }
            // Check if already declared.
            if (findVar(item) != -1) {
                printf("Error in line %d\n", lineNumber);
                continue;
            }

            // Declare with a new temporary register and initialize to 0 implicitly by storing.
            int reg = newTemp();
            declareVar(item, reg);
            emit("sb r%d, %s(r0)\n", reg, item);  // Store (presumably 0) to memory.
        }
    }
    return 1;  // Successfully handled declaration.
}

// ========== MAIN ==========

// Main function: reads input from "input.txt", processes each line, and generates output.
int main(void) {
    FILE *fp = fopen("input.txt", "r");  // Open input file for reading.
    if (!fp) {  // Error opening file.
        fprintf(stderr, "Error: cannot open input.txt\n");  // Print error to stderr.
        return 1;  // Exit with error code.
    }

    char line[MAX_LINE];  // Buffer for reading lines.
    while (fgets(line, sizeof(line), fp)) {  // Read each line from file.
        lineNumber++;  // Increment line number.
        trim(line);    // Trim whitespace.
        if (strlen(line) == 0) continue;  // Skip empty lines.

        // Try to handle as a declaration.
        if (strncmp(line, "int ", 4) == 0) {
            handleDeclaration(line);  // Process declaration.
            continue;  // Move to next line.
        }

        // Check if it's an expression (contains operators or parentheses).
        if (strchr(line, '+') || strchr(line, '-') || strchr(line, '*') ||
            strchr(line, '/') || strchr(line, '(') || strchr(line, ')')) {

            // Remove trailing semicolon if present.
            int len = strlen(line);
            if (len > 0 && line[len - 1] == ';') line[len - 1] = '\0';
            trim(line);  // Trim again.

            // Validate the expression.
            if (!validateExpression(line)) {
                printf("Error in line %d\n", lineNumber);  // Error if invalid.
                continue;
            }

            // Convert to postfix and build tree.
            char postfix[256][MAX_TOKEN];
            int count = infixToPostfix(line, postfix);
            Node *tree = buildTree(postfix, count);
            if (!tree) {  // Error building tree.
                printf("Error in line %d\n", lineNumber);
                continue;
            }

            // Generate code for the expression.
            int result = generateCode(tree, 0);
            if (result != -1)  // If successful, store result in a temporary memory location.
                emit("sb r%d, t%d(r0)\n", result, result);  // Use "t" prefix for temp storage.

            freeTree(tree);  // Free tree memory.
            continue;  // Next line.
        }

        // If not a declaration or expression, it's an error.
        printf("Error in line %d\n", lineNumber);
    }

    fclose(fp);  // Close the input file.
    return 0;    // Successful execution.
}
