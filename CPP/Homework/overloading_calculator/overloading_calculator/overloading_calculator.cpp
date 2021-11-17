#include"overloading_calculator.h"

void main() {
	run();
}

void run() {
	int menu_num = 0, cal_num = 0, first_num = 0, second_num = 0;
	double d_first_num = 0.0, d_second_num = 0.0;
	main_display();
	while (1) {
		menu_num = 0;
		cin >> menu_num;
		if (menu_num == 1) {
			select_cal_display();
			cin >> cal_num;
			cout << "두 수를 입력 하시오" << endl;
			cin >> first_num >> second_num;
			cout << "결과 : " << calculator(first_num,cal_num,second_num)<<endl;
		}else if (menu_num == 2) {
			select_cal_display();
			cin >> cal_num;
			cout << "두 수를 입력 하시오" << endl;
			cin >> d_first_num >> d_second_num;
			cout << "결과 : " << calculator(d_first_num, cal_num, d_second_num)<<endl;
		}else if (menu_num == 3) {
			cout << "프로그램 종료" << endl;
			exit(1);
		}else {
			cout << "1~3의 정수를 입력 하시오." << endl;
			if (!cin) {
				cout << "숫자를 입력 하시오." << endl;
				cin.clear();
				cin.ignore(INT_MAX, '\n');
			}
			continue;
		}
	}
}

void main_display() {
	cout << "------------" << endl;
	cout << "계산기 프로그램" << endl;
	cout << "------------" << endl;
	cout << "1. 정수 연산" << endl;
	cout << "2. 실수 연산" << endl;
	cout << "3. 종료" << endl;
	cout << "------------" << endl <<endl;
}

void select_cal_display() {
	cout << "원하는 사칙연산을 입력 하시오." << endl;
	cout << "1. 더하기" << endl << "2. 빼기" << endl;
	cout << "3. 곱하기" << endl << "4. 나누기" << endl;
}

int calculator(int first_num,int cal_num, int second_num) {
	int result = 0;
	switch (cal_num)
	{
	case 1 :
		result = first_num + second_num;
		break;
	case 2 :
		result = first_num - second_num;
		break;
	case 3 :
		result = first_num * second_num;
		break;
	case 4 :
		result = first_num / second_num;
		break;
	default:
		cout << "사칙연산 선택시 1~4의 정수를 입력 하시오." << endl;
		break;
	}
	return result;
}

double calculator(double d_first_num,int cal_num, double d_second_num) {
	double result = 0;
	switch (cal_num)
	{
	case 1:
		result = d_first_num + d_second_num;
		break;
	case 2:
		result = d_first_num - d_second_num;
		break;
	case 3:
		result = d_first_num * d_second_num;
		break;
	case 4:
		result = d_first_num / d_second_num;
		break;
	default:
		cout << "사칙연산 선택시 1~4의 정수를 입력 하시오." << endl;
		break;
	}
	return result;
}