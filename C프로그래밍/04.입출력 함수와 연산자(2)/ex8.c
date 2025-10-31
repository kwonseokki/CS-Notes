#include <stdio.h>
int main() {
    unsigned char mask = 15; // 0000 1111
    unsigned char x = 179; // 1011 0011

    // 특정 비트만 0으로 지우기
    //(0000) 1111 지우려는 부분을 0으로 채운다
    // 1011 0011
    // 0000 0011 = 3
    printf("x & mask => %d\n", x & mask);
    
    // 특정 비트만 1로 채우기
    // (0000) 1111 
    // 1011 0011
    // 1011 1111 = 191
    printf("x | mask => %d\n", x | mask);

    // 특정 비트만 값을 반전하기
    // (0000) 1111 
    // 1011 0011
    // 1011 1100 = 188
    printf("x ^ mask => %d\n", x ^ mask);    
}