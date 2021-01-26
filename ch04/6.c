#include<stdio.h>
#include<float.h>

int main(void) {

    double a = 1.0 / 3.0;

    float b = 1.0 / 3.0;

    printf("%.4lf %.12lf %.16lf %lf\n", a , a, a, DBL_DIG);

    printf("%.4f %.12f %.16f %f", b , b, b, FLT_DIG);

    return 0;
}