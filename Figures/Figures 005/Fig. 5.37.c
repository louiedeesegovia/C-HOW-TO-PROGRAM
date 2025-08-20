#include <stdio.h>
#include <stdarg.h>

void myPrint(const char* format, ...) {
    va_list args;
    va_start(args, format);
    const char* p;

    for (p = format; *p != '\0'; p++) {
        switch (*p) {
            case 'i': {
                int i = va_arg(args, int);
                printf("%d ", i);
                break;
            }
            case 'c': {
                char c = (char)va_arg(args, int);  // chars are promoted to int
                printf("%c ", c);
                break;
            }
            case 'f': {
                double f = va_arg(args, double);  // float is promoted to double
                printf("%f ", f);
                break;
            }
            case 's': {
                char* s = va_arg(args, char*);
                printf("%s ", s);
                break;
            }
        }
    }

    va_end(args);
    printf("\n");
}

int main() {
    myPrint("icsf", 42, 'A', "Hello", 3.14);
    // Output: 42 A Hello 3.140000
    return 0;
}

