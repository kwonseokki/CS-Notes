#include <stdio.h>
int main() {
    printf("%c\n", 'A'); // A
    // 0x42
    // 16*4 + 2 = 66
    printf("%c\n", 0x42); // B
    printf("%s\n", "KNOU"); // KNOU
    // null 이후의 문자열은 버려짐
    printf("%s\n", "ab\0cd"); // ab
}