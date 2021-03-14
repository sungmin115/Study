#include"20.h"

void main() {
	int num1 = 0, count =0;
	
	printf("100 미만의 자연수를 입력 하시오. \n");
	scanf("%d", &num1);

	if (num1 %2 ==0) {
		count = divide_2(num1, count);
	}
	else {
		count = divide_3(num1, count);
	}
	printf("Output : \n");
	printf("%d", count);

	return 0;
}

int divide_2(int num1, int count) {
	num1 = num1 / 2;
	count++;
	if (num1 != 1) {
		divide_2(num1, count);
	}else
	return count;
}

int divide_3(int num1, int count) {
	num1 = num1 / 3;
	count++;
	if (num1 != 1) {
		divide_3(num1, count);
	}else
	return count;
}