#include <stdio.h>
int max(int x, int y) {
    return x > y ? x : y;
}
int min(int x, int y) {
    if (x > y) return y;
    else return x;
}
int main() {
    int i = 10, j = 20;
    printf("max(%d, %d) = %d\n", i, j, max(i, j));
    printf("min(%d, %d) = %d\n", i, j, min(i, j));
}