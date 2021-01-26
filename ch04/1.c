#include<stdio.h>
int main(void) {

    printf("input your name and last name\n");

    char name[30];
    char last_name[30];

    scanf("%s %s", name, last_name);

    printf("%s %s", last_name, name);

    return 0;
}