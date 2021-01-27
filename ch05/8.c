#include <stdio.h>

void temperatures(double num);

int main(void)
{
    while (1)
    {
        char num;
        scanf("%c", &num);
        if ((num >= 'a' && num <= 'z') || (num >= 'A' && num <= 'Z'))
        {
            return 0;
        } else {
            temperatures(num);
        }
    }

    return 0;
}

void temperatures(double num)
{
    double celsius = 1.8 * num + 32;
    double kelvin = celsius + 273.16;
    printf("%.2lf celsius, %.2lf kelvin ", celsius, kelvin);
}