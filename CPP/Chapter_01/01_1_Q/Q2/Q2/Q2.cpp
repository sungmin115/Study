#include<iostream>

int main(void)
{
	char name[100];
	int phone_number=0;

	std::cout << "이름과 전화번호를 입력 하시오.";
	std::cin >> name >> phone_number;
	
	std::cout << "이름: " << name << std::endl << "전화번호: " << phone_number << std::endl;

	return 0;
}