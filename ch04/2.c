#include<stdio.h>
#include<string.h>

int main(void) {
    printf("input your name\n");
    char name[20];
    scanf("%s", name);

    printf("\"%s\"\n",name);

    printf("\"%20s\"\n",name);

    printf("\"%-20s\"\n",name);

    printf("\"%*s\"\n",strlen(name) + 3,name);

    return 0;
}