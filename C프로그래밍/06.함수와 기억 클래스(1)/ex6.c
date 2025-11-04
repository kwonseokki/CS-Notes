#include <stdio.h>
// int sum(int a, int b); // 함수의 원형
int sum(int u, int v); // 함수 원형은 매개변수 이름은 중요하지 않음
int main() {
    int x, y, c;
    scanf("%d %d", &x, &y);
    c = sum(x, y);
    printf("%d\n", c);
}
int sum(int a, int b) {
    int d;
    d = a + b;
    return d;
}