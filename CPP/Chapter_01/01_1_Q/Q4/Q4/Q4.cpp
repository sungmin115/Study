#include<iostream>

int main(void)
{
	int base_payment = 50, selling_item_number=0;
	double selling_per = 0.12, result = 0;


	while (1) {
		std::cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
		std::cin >> selling_item_number;

		if (selling_item_number == -1) {
			break;
		}
		else {
			result = base_payment + selling_item_number * selling_per;
			std::cout << "이번 달 급여: " <<result<< "만원" << std::endl;
		}
	}
	std::cout<<"프로그램을 종료합니다."<<std::endl;
	return 0;
}