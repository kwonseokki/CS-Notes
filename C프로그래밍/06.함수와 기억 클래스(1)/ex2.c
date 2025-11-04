#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main() {
    double x = 12.34;
    int i = -5, j = 2;
    int a, b, c;
    // 실수 -> 정수로 변환
    // ceil 소수점을 올린다
    a = (int)ceil(x);
    // floor 소수점을 버린다
    b = (int)floor(x);
    // 4^j = 16
    c = (int)pow(4, j);
    printf("abs(-5) = %d\n", abs(i));
    printf("ceil(12.34) = %d\n", a); // 5
    printf("floor(12.34) = %d\n", b);
    printf("cos(10) = %f\n", cos(10));
    printf("exp(2) = %f\n", exp(j));
    printf("sqrt(2) = %f\n", sqrt(j));
    printf("pow(4,2) = %d\n", c);
}