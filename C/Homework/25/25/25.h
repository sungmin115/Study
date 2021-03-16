#include<stdio.h>
#pragma warning(disable:4996)

void show_example();
void Input_main();
void select_menu(int n, int m);
void show_menu_1(int n);
void show_menu_2(int n);
void show_menu_3(int n);

/*
 Quest 21.03.16
삼각형의 높이 n과 종류 m을 입력 받은 후 
다음과 같은 삼각형 형태로 출력하는 프로그램을 작성하시오

   *
   First - 1
   *
   **
   ***
   ****

   Second - 2
   ****
   ***
   **
   *

   Third - 3
      *
     ***
    *****
   *******

   * 입력 조건
   삼각형의 크기 n(n의 범위는 100 이하의 자연수)과 
   종류 m(m은 1부터 3사이의 자연수)을 입력받는다.

   * 출력 조건
   위에서 언급한 3가지 종류를 입력에서 들어온 
   높이 n과 종류 m에 맞춰서 출력한다.
   입력된 데이터가 주어진 범위를 벗어나면 
   "INPUT ERROR!"을 출력한다.

   //ex 1
   Input :
   3 2

   Output :
   ***
   **
   *

   // ex 2
   Input :
   4 3

   Output :
      *
     ***
    *****
   *******

   // ex 3
   Input :
   200 3

   Output :
   INPUT ERROR!
*/