#include<stdio.h>
#define r 60

int main(void) {

    while(1) {
        int min;
        scanf("%d", &min);
        if (min <= 0) {
            return 0;
        }
        int hour = min / r;
        int left_min = min % r;
        printf("hour %d, min %d\n", hour, left_min);
    }
    return 0;
}