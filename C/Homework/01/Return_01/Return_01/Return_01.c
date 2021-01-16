#include<stdio.h>

int back_main(int num1) {
	int result = 0;
	if (num1 < 10) {
		return result;
	}
	else
	{
		return result = num1 * 10;
	}
}

void main() {
	int num1 = 0;
	printf("정수를 입력 하시오.");
	scanf_s("%d", &num1);

	num1 = back_main(num1);

	printf("num1: %d",num1);

	return 0;
}