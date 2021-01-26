#include<stdio.h>

int main(void) {

    const double a = 3.785;
    const double b = 1.609;    

    double len;
    double weight;
    scanf("%lf %lf", &len, &weight);

    printf("%.1lf %.1lf", len / weight, len * a / (weight * b));


    return 0;
}