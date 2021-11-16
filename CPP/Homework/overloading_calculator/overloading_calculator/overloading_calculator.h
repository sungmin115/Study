#include<iostream>
using std::cout;
using std::cin;
using std::endl;

void run();
void main_display();
void select_cal_display();
int calculator(int first_num, int cal_num, int second_num);
double calculator(double d_first_num, int cal_num, double d_second_num);

/*
오버로딩을 사용하여 계산기를 만들어 보아라
오버로딩에 사용할 함수
ex)
int add(int a, int b)
double add(double a, doube b)
*/