#include<stdio.h>
int main(void) {

    int num;
    printf("input number \n");
    scanf("%d", &num);
    double piece = 3E-23;
    long total = 950.0 * num;
    printf("result is %f", total / piece);

    return 0;
}