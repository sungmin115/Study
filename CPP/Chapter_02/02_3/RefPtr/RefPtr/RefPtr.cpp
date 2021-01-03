#include<iostream>
using namespace std;

int main(void)
{
	int num = 12;
	int* ptr = &num;		//ptr변수의 선언
	int** dptr = &ptr;		//dptr변수의 선언

	int& ref = num;
	int* (&pref) = ptr;		//pref참조자 선언
	int** (&dpref) = dptr;	//dpref참조자 선언

	cout << ref << endl;
	cout << *pref << endl;
	cout << **dpref << endl;
	return 0;
}