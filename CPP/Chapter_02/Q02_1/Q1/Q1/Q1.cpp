#include<iostream>
using namespace std;

void OneAdder(int &plusone)
{
	plusone = plusone + 1;
}

void Switcher(int& switcher)
{
	switcher = switcher * (-1);
}

int main(void)
{
	int num1 = 0, num2 = 1;
	OneAdder(num1);
	Switcher(num2);

	cout <<"num1: "<< num1 << endl;
	cout <<"num2: "<< num2 << endl;
	return 0;
}