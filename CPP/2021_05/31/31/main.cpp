#include"31.h"

int main(int argc, char* argv[]) {
	run();
	return 0;
}

void run() {
	int num1 = 0, num2 = 1, select =0;
	float fl_num_one = 0.0, fl_num_two = 0.0;
	std::string st_one(" ");
	std::string st_two = " ";
	std::cout << "1. 정수 2. 실수 3. 문자열" << std::endl;
	std::cout << "더하고자 하는 입력 값의 타입을 숫자로 입력 하시오." << std::endl;
	std::cin >> select;
	switch (select){
	case 1:
		std::cout << "첫번째 정수를 입력 하시오." << std::endl;
		std::cin >> num1;
		std::cout << "두번째 정수를 입력 하시오." << std::endl;
		std::cin >> num2;
		std::cout<<add(num1,num2)<<std::endl;
		break;
	case 2:
		std::cout << "첫번째 실수를 입력 하시오." << std::endl;
		std::cin >> fl_num_one;
		std::cout << "두번째 실수를 입력 하시오." << std::endl;
		std::cin >> fl_num_two;
		std::cout<<add(fl_num_one, fl_num_two)<<std::endl;
		break;
	case 3:
		std::cout << "첫번째 문자를 입력 하시오." << std::endl;
		std::cin >> st_one;
		std::cout << "두번째 문자를 입력 하시오." << std::endl;
		std::cin >> st_two;
		std::cout << add(st_one, st_two) << std::endl;
	default:
		break;
	}
}

int add(int a, int b) {
	int result = 0;
	result = a + b;
	return result;
}

float add(float a, float b) {
	float result = 0;
	result = a + b;
	return result;
}

std::string add(std::string a, std::string b) {
	std::string result(" ");
	result = a + b;
	return result;
}