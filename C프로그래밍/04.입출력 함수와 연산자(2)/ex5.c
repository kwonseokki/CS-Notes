#include <stdio.h>
int main() {
    int a = 4, b = 7, c = 10, d;
    // --c > 0 은 비교x    
    d = a > 0 && b++ <= 5 && --c > 0;
    printf("d = %d\n", d); // d = 0
    printf("b = %d\n", b); // b = 8
    printf("c = %d\n", c); // c = 10
}