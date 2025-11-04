#include <stdio.h>
int sum(int a, int b) {
    int d;
    d = a + b;
    return d;
}
int main() {
    int x, y, c;
    scanf("%d %d", &x, &y);
    c = sum(x, y);
    printf("%d\n", c);
}