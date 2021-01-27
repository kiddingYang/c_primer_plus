#include<stdio.h>

float cube(float num);

int main(void) {
    int num;
    scanf("%d", &num);
    printf("cube %lf", cube(num));
    return 0;
}

float cube(float num) {
    return num * num * num;
}