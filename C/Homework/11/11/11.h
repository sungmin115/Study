#include<stdio.h>
#pragma warning(disable: 4996)


void main_display() {
	printf("자연수 N을 입력받아 N부터 1까지 차례대로 출력하는 프로그램 \n");
	printf("(단, N은 50이하의 자연수 이다.)");
	printf("자연수 N을 입력하시오. \n");
}

void count(int num1) {
	if(num1 > 0) {
		printf("%d \n", num1);
		num1--;
		count(num1);
	}
}
