#include<stdio.h>
void printInfo(void);
void printDeny(void);

int main(void) {

    printInfo();
    printInfo();
    printInfo();

    printDeny();


    return 0;
}

void printInfo(void) {
    printf("for he's a jolly good fellow!\n");
}

void printDeny(void) {
    printf("which nobody can deny!\n");
}