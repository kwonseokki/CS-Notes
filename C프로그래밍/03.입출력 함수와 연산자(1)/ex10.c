#include <stdio.h>
int main() {
    // 문자열 배열의 첫번째 주소를 가리키는 변수
    char str[100];
    printf("문자열을 입력하세요\n");
    gets(str);
    printf("입력한 문자열 = ");
    puts(str);
}