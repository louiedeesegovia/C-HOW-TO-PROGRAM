#include <stdio.h>

int timeInSeconds(int h, int m, int s) {
    if (h == 12) {
        h = 0;
    }
    return h * 3600 + m * 60 + s;
}

int main() {
    int h1, m1, s1;
    int h2, m2, s2;

    printf("Enter first time (hh mm ss): ");
    scanf("%d %d %d", &h1, &m1, &s1);

    printf("Enter second time (hh mm ss): ");
    scanf("%d %d %d", &h2, &m2, &s2);

    int t1 = timeInSeconds(h1, m1, s1);
    int t2 = timeInSeconds(h2, m2, s2);

    int difference = t2 - t1;

    if (difference < 0) {
        difference = -difference;  // get absolute value
    }

    printf("Seconds since 12:00 for first time: %d\n", t1);
    printf("Seconds since 12:00 for second time: %d\n", t2);
    printf("Difference in seconds: %d\n", difference);

    return 0;
}

