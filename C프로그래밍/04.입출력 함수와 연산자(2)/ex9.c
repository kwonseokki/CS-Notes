#include <stdio.h>
int main() {
    int x = 40;
    // 2^n 곱하기 
    // x를 왼쪽으로 3비트만큼 이동한다
    // 40 * 8
    int y = x << 3; 
    printf("y: %d\n", y);

    // 2^n 나누기
    // 40 / 4
    y = x >> 2;    
    printf("y: %d\n", y);
}