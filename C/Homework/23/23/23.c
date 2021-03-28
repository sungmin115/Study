#include"23.h"

void main() {
	int num_first = 0, num_second = 0, up_down =0, length =0;
	printf("알고 싶은 구구단 구간의 처음과 끝을 입력 하시오. \n");
	num_first = input_number();
	num_second = input_number();
	up_down = check_up_down(num_first, num_second);
	length = check_length(num_first, num_second);
	show_Multiplication_table(num_first, num_second, up_down, length);
	
	return 0;
}

int input_number() {
	int number=0;
	while (1) {
		scanf("%d", &number);
		if (number <=9 && 2 <= number) {
			break;
		}
		else {
			printf("INPUT ERROR!");
		}
	}
	return number;
}

int check_up_down(int num_first, int num_second) {
	int up_down = 0;
	if (num_first < num_second) {
		up_down = 0;
	}else {
		up_down = 1;
	}
	return up_down;
}

int check_length(int num_first, int num_second) {
	int length = 0;
	if (num_first<num_second) {
		length = num_second - num_first + 1;
	}else {
		length = num_first - num_second + 1;
	}
	return length;
}

void show_Multiplication_table(int num_first, int num_second, int up_down, int length) {
	int count_multi = 0, count_length =0;
	if (up_down == 1) {
		for (count_multi = 1; count_multi < 10; count_multi++) {
			for (count_length = 0; count_length < length; count_length++) {
				printf("%d * %d = %3d", num_first, count_multi, num_first*count_multi);
				num_first--;
				printf("   ");
			}
			num_first = num_first + count_length;
			printf("\n");
		}
	}
	else if(up_down == 0){
		for (count_multi = 1; count_multi < 10; count_multi++) {
			for (count_length = 0; count_length < length; count_length++) {
				printf("%d * %d = %3d", num_first, count_multi, num_first * count_multi);
				num_first++;
				printf("   ");
			}
			num_first = num_first - count_length;
			printf("\n");
		}
	}
}