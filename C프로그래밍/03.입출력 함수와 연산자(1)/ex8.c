#include <stdio.h>
int main() {
    char c;
    // str배열의 첫번째 주소를 가리킴
    char str[100];
    scanf("%c", &c);
    scanf("%s", str);
    // str을 문자열로 출력
    // A Computer Science 입력시 A Computer 까지만 출력된다.
    // c에 'A'가 저장되고 str에 'Computer'가 저장됨
    // 띄어쓰기 때문에 Science 문자는 버려짐
    printf("%c %s\n", c, str);
}