#include<stdio.h>
int main(void) {
    int num;
    scanf("%d", &num);
    int sum = 0;
    while (num > 0)
    {
        sum = sum + num;
        num--;
    }
    printf("sum %d", sum);
    return 0;
}