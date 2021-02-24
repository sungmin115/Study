#include<stdio.h>
#pragma warning(disable: 4996)

void main_display() {
	printf("자연수 N을 입력받는다 \n");
	printf("N이 홀수인 경우에는 1부터 N까지의 홀수를 \n");
	printf("N이 짝수인 경우에는 2부터 N까지의 짝수를 출력하는 프로그램\n");
	printf("자연수 N을 입력 하시오.");
}

void count(const int max_num ,int num2) {
	/*
		if (num1 %2 == 1) {
			if (num1>0) {
				num2 = num2 + 1;
				printf("%d ", num2);
				num1 = num1 - 2;
				num2 = num2 + 1;
				count(num1, num2);
			}
		}
		else if(num1 %2 == 0) {
			if (num1 > 0) {
				num2 = num2 + 2;
				printf("%d ", num2);
				num1 = num1 - 2;
			
				count(num1, num2);
			}
		}
	*/
	if (max_num > 0) {
		if (max_num >= num2) {
			printf("%d ", num2);
			num2 = num2+2;
			count(max_num, num2);
		}
		else {
			return;
		}
	}

}
