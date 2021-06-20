#include"07_01.h"

int main(int argc, char** argv) {
	int count = 0;
	//Phone firstPhone;
	//firstPhone.number = 0;
	Phone* firstPhone;
	int* apple;
	char* test;

	std::cin >> count;
	apple = (int*)malloc(sizeof(int) * count);
	test = (char*)malloc(sizeof(char) * count);
	firstPhone = (Phone*)malloc(sizeof(Phone) * count);
	
	return 0;
}