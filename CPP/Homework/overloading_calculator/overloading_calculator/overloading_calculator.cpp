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
			cout << "�� ���� �Է� �Ͻÿ�" << endl;
			cin >> first_num >> second_num;
			cout << "��� : " << calculator(first_num,cal_num,second_num)<<endl;
		}else if (menu_num == 2) {
			select_cal_display();
			cin >> cal_num;
			cout << "�� ���� �Է� �Ͻÿ�" << endl;
			cin >> d_first_num >> d_second_num;
			cout << "��� : " << calculator(d_first_num, cal_num, d_second_num)<<endl;
		}else if (menu_num == 3) {
			cout << "���α׷� ����" << endl;
			exit(1);
		}else {
			cout << "1~3�� ������ �Է� �Ͻÿ�." << endl;
			if (!cin) {
				cout << "���ڸ� �Է� �Ͻÿ�." << endl;
				cin.clear();
				cin.ignore(INT_MAX, '\n');
			}
			continue;
		}
	}
}

void main_display() {
	cout << "------------" << endl;
	cout << "���� ���α׷�" << endl;
	cout << "------------" << endl;
	cout << "1. ���� ����" << endl;
	cout << "2. �Ǽ� ����" << endl;
	cout << "3. ����" << endl;
	cout << "------------" << endl <<endl;
}

void select_cal_display() {
	cout << "���ϴ� ��Ģ������ �Է� �Ͻÿ�." << endl;
	cout << "1. ���ϱ�" << endl << "2. ����" << endl;
	cout << "3. ���ϱ�" << endl << "4. ������" << endl;
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
		cout << "��Ģ���� ���ý� 1~4�� ������ �Է� �Ͻÿ�." << endl;
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
		cout << "��Ģ���� ���ý� 1~4�� ������ �Է� �Ͻÿ�." << endl;
		break;
	}
	return result;
}