/*
Assuming that elements of a local static array are initialized to zero every time the func
tion in which the array is defined is called.

#include <stdio.h>

void counter() {
    static int arr[3];  // Initialized to 0 ONLY ONCE

    arr[0]++;
    arr[1]++;
    arr[2]++;

    printf("%d %d %d\n", arr[0], arr[1], arr[2]);
}

int main() {
    counter();  // first call
    counter();  // second call
    counter();  // third call
    return 0;
}

*/

#include <stdio.h>

void test() {
    int arr[3] = {0};  // reinitialized every call
    arr[0]++;
    printf("%d\n", arr[0]);
}

int main() {
    test();  // first call
   
    return 0;
}
