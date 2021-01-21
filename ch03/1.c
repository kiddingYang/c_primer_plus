#include<stdio.h>
int main(void) {

    // 整数上溢
    int max = __INT_MAX__;
    printf("int up %d\n", max + 1);

    // 浮点数上溢
    float toobig = 3.4E38 * 100.0f;
    printf("%e\n", toobig);

    // 浮点数下溢
    float toolow = 3.4E-380 / 100.0f;
    printf("%e\n", toolow /2 );

    return 0;
}