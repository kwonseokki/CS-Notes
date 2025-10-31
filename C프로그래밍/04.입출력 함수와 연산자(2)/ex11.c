#include <stdio.h>
int main() {
    /*
    - 형변환 연산자
    (typename)expr

    - 묵시적 형변환
    특별한 형변환 연산자를 사용하지 않아도 연산이 가능한 자료형으로 자동적으로 이루어진다.
    * 정수형 승격(integer promotion)
    char, unsigned char, short, unsigned short 등의 int 형보다 작은 자료형은 효율적인 처리를 위해
    int 형 또는 unsigned int형으로 변환됨
    * 서로 다른 자료형이 혼재하는 식에서는 표현 범위가 더 큰 자료형으로 변환됨
    float => dobule
    연산 순서에 따라서 꼭 필요한 시점에 변환됨
    
    intVar = doubleVar + (intVar * floatVar)
    - (intVar * floatVar)에서 int가 float으로 승격되어 float 형 계산
    - 그 결과가 doubleVar와 더해지면서 전체 식은 double 형
    - 마지막에 double 결과가 intVar에 대입되며 double → int로 변환되어 저장
    */
   int a = 3, b = 4;
   double c;
   c = (double)a / b;
   printf("나눗셈 결과: %f\n", c);
}