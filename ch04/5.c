#include<stdio.h>
#include<string.h>

int main(void) {

    printf("input your name and last name\n");

    char name[20];
    char last_name[20];
    scanf("%s %s", name, last_name);
    printf("%s %s\n", name , last_name);

    printf("%*d %*d\n", strlen(name), strlen(name), strlen(last_name), strlen(last_name));

    printf("%-*d %-*d\n", strlen(name), strlen(name), strlen(last_name), strlen(last_name));
    
    return 0;
}