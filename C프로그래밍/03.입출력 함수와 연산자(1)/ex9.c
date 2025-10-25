/*
getchar() 함수
- stdin으로부터 1개의 문자를 입력함
형식:
ch = getchar()
ch는 char형 변수

putchar() 함수
- stdout에 1개의 문자를 출력함
형식:
putchar(문자)
*/
#include <stdio.h>
int main() {
    char c;
    printf("문자 하나를 입력하세요\n");
    c = getchar();
    printf("입력한 문자 = ");
    putchar(c);
}