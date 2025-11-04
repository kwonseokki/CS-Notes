## 1. 표준함수의 개념
### 표준함수
- C언어에서 프로그램 작성에 필요한 기능을 제공하기 위한 함수 집합
- 표준 라이브러리 형태로 제공
- 각 함수의 원형을 기능별로 헤더파일에 제공
    - 함수의 원형(prototype): 함수를 사용하는데 필요한 사항을
    미리 선언하는 문장
    => 함수의 이름, 매개변수, 반환하는 값의 자료형 등
    - 필요한 펴준함수의 원형이 선언되어 있는 헤더파일을 미리 포함(#include) 해야 함

### 주요 표준함수
| 헤더 | 함수 예 |
|-----|-----|
stdio.h | printf(), scanf(), getchar(), putchar() |
string.h | strcat(), strcmp(), strcpy() |
math.h | sqrt(), sin(), cos(), tan(), log() |
ctype.h | isalpha(), isdigit(), islower() |
stdlib.h | atoi(), strtol(), rand(), srand() |