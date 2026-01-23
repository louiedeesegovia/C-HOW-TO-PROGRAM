/*
Not providing scanf with a character array large enough to store a string typed at the key
board can result in destruction of data in a program and other runtime errors. This can
also make a system susceptible to worm and virus attacks.

//UNSAFE EXAMPLE
#include <stdio.h>

int main() {
    char name[5];   // Can only store 4 characters + '\0'

    printf("Enter your name: ");
    scanf("%s", name);   // No size limit → dangerous!

    printf("Hello, %s\n", name);
    return 0;
}


//SAFE WITH SIZE LIMIT
#include <stdio.h>

int main() {
    char name[5];

    printf("Enter your name: ");
    scanf("%4s", name);   // Limit input size

    printf("Hello, %s\n", name);
    return 0;
}
*/

//BEST PRACTICE
#include <stdio.h>

int main() {
    char name[20];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Hello, %s\n", name);
    return 0;
}
