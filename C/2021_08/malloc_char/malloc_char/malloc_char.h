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
    printf("����� �޴��� ���Ͽ� ������ ����ÿ�.\n");
}
/*
--����--
 MENU
 1. push
 2. pop
 3. show
 4. end

 breif
 1. push ������ ����
 2. pop ������ ����
 3. ������ ���
*/