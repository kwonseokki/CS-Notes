#include <stdio.h>
#include <stdlib.h>
/*
[컴파일]
gcc ex1.c -o hello
- ex1.c 파일을 hello라는 출력파일로 생성

[실행]
./ex1 <넘겨줄 인자>
- 운영체제가 명령어를 띄어쓰기 기준으로 토큰화(tokenize)
- 각 토큰을 argv 배열에 저장

입력 예시:
./ex1 world
argv[0] => /Users/a/Desktop/Computer-Science/C-Programming/03.입출력 함수와 연산자(1)/ex1!
argv[1] => world
argc => 2

[표준입출력(starndard input/output)]
- 프로그램이 사용자와 데이터를 주고받는 기본적인 입력과 출력장치
입력
- scanf()
- getchar()
- gets()

출력
- printf()
- putchar()
- pust()
*/ 
int main(int argc, char* argv[]) {
    printf("Hello, %s!\n", argv[0]);
    return EXIT_SUCCESS;
}