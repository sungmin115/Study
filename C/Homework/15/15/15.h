#include<stdio.h>
#pragma warning(disable: 4996)

void display_main();
int Input_info(char* arr_name, char* arr_company, int number_company);
void Output_info_char(char* arr);
int count_arr_char(char* arr);
void Output_info_char(char* arr, int count);
void Output_info_int(int* arr, int count);

/*
21.03.01 Quest
"이름", "회사명", "사원번호"를 입력받아 아래와 같이 출력하는 프로그램을 작성하시오.

(이름과 회사명은 각각 20자 이하이다.)

Input :
SungminPark
Wavem
4

Output :
Name : SungminPark
Company : Wavem
Number : 4

*/