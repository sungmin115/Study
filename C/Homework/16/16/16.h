#include<stdio.h>
#pragma warning(disable: 4996)

typedef struct person {
    char name[20];
    int hight;
 }Person;

Person ReadPersonInfo(void);

void ShowPersonInfo(Person man);
void acending_info(Person * man, int i, int j);
     
/*
21.03.02 Quest
5명의 이름과 키를 입력받아 
키가 가장 작은 사람의 이름과 키를 출력하는 프로그램을 작성하시오. 
이름은 20자 이하이다.

Input :
Park 175
Lee 180
Choo 185
Son 193
Kim 188

Output :
Park 175
*/