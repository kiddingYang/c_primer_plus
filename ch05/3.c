#include<stdio.h>

int main(void)  {

    int days;
    scanf("%d", &days);

    printf("%d days are %d weeks. %d days", days, days / 7, days % 7);

    return 0;
}