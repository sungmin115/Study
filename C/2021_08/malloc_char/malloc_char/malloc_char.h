#include<stdio.h>
#include<malloc.h>
#pragma warning(disable:4996)
void run();
char* first_push_data(char* pnum);
char* push_data(char* pnum);
char* pop_data(char* pnum);
char* show(char* pnum);
void main_display() {
    printf("--------MENU--------\n");
    printf("----- 1. push ------\n");
    printf("----- 2. pop  ------\n");
    printf("----- 3. show ------\n");
    printf("----- 4. end  ------\n");
    printf("--------------------\n");
    printf("상단의 메뉴를 통하여 문장을 만드시오.\n");
}
/*
--문제--
 MENU
 1. push
 2. pop
 3. show
 4. end

 breif
 1. push 데이터 삽입
 2. pop 데이터 해제
 3. 데이터 출력
*/