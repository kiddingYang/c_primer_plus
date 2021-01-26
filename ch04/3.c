#include<stdio.h>
int main(void) {
    float input;
    scanf("%f", &input);
    printf("the input is %.1f or %.1e\n", input, input);

    printf("the input is %.3f or %.3E\n", input, input);

    return 0;
}