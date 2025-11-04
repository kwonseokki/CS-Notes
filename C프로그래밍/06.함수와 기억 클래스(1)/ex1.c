#include <stdio.h>
int minimum(int v1, int v2, int v3) {
    int min = v1 < v2 ? v1 : v2;
    return min < v3 ? min : v3;
}
int main() {
    int a = 15, b = 10, c = 20, min;
    // 동일한 코드 중복
    // min = a < b ? a : b;
    // min = min < c ? min : c;
    min = minimum(a, b, c);
    printf("%d, %d %d의 최소값 = %d\n", a, b, c, min);
    int x = 25, y = 31, z = 17;
    // 동일한 코드 중복
    // min = x < y ? x : y;
    // min = min < z ? min : z;
    min = minimum(x, y, z);
    printf("%d, %d, %d의 최솟값 = %d\n", x, y, z, min);
}