#include<stdio.h>
#pragma warning(disable:4996)

void show_main();
void run();
int input_number(int number);
char input_char(char charactor);
void show_result(int number_first, int number_second, char charactor);

/*
21.03.22 Quest
두 정수와 한 개의 연산자(+, -, *, /, %)를 
입력 받아 입력 순서대로 계산하는 계산식을 출력하시오.

* 표준입출력방식으로 작성하세요.

Input :
82 51 +

Output :
82 + 51 = 133
*/