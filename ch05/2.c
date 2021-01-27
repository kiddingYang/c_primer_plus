#include<stdio.h>

int main(void)  {
    int num;
    scanf("%d", &num);
    int w = 10;
    while (w-- >= 0) {
        printf("%d\t", num++);
    }
    return 0;
}