#include <stdio.h>

int main(void)
{

    while (1)
    {
        int num;
        printf("enter a height in centimeters: ");
        scanf("%d", &num);
        if (num <= 0)
        {
            return 0;
        }
        printf("%d cm = %f feet, %1.f inches \n", num, num / 1.6, num / 1.8);
    }

    return 0;
}