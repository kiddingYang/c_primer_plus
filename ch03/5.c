#include<stdio.h>
int main(void) {

    double yearOfSecond = 3.156E7;
    int age;
    scanf("%d", &age);
    printf("age %d to second %E",age, age * yearOfSecond);

    return 0;
}