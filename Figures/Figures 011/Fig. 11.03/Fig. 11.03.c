#include <stdio.h>

int main() {
    int account;
    char name[30];
    double balance;

    FILE *mail;

    mail = fopen("sample.dat", "w");

    if (mail == NULL) {
        printf("File could not be opened.\n");
        return 1;
    }

    while (scanf("%d%s%lf", &account, name, &balance) != EOF) {
        if (balance != 0.0) {
            fprintf(mail, "%d %s %.2f\n", account, name, balance);
        }
    }

    fclose(mail);
    return 0;
}
