#include <stdio.h>
int main() {
    int x = 5, a, b;    
    a = ++x * x--; 
    b = x * 10;
    printf("a = %d, b = %d, x = %d\n\n", a, b, x);
}