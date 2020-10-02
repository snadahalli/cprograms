#include <stdio.h>
int reverse(int n) {
    int d, y = 0;
    while (n) {
        d = n % 10;
        if ((n > 0 && y > (0x7fffffff - d) / 10) ||
            (n < 0 && y < ((signed)0x80000000 - d) / 10)) {
            return 0;  
        }
        y = y * 10 + d;
        n = n / 10;
    }
    return y;  
}

int main(void)
{
    int i = 123;
    printf("Original integer: %d  ",i);
    printf("\nReverse integer: %d  ",reverse(i));
    i = 208478933;
    printf("\nOriginal integer: %d  ",i);
    printf("\nReverse integer: %d  ",reverse(i));
    i = -73634;
    printf("\nOriginal integer: %d  ",i);
    printf("\nReverse integer: %d  ",reverse(i));
    return 0;
}
