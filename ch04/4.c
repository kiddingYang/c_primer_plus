#include<stdio.h>
int main(void) {

    printf("input your name and size\n");

    char name[20];
    float size;

    scanf("%s %f", name, &size);

    printf("%s, you are %.3f feet tall", name, size);

    return 0;
}