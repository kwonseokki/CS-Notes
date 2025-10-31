#include <stdio.h>
int main() {    
    int a, b;
    printf("두 수를 입력하시오:");
    scanf("%d %d", &a, &b);
    printf("최대값 = %d\n", a >= b ? a : b);
}