#include"07.h"

void main() {
	int result = 0, n = 0;

	
	printf("정사각형의 넓이를 구할 한 변의 길이를 입력 하시오. \n");
	scanf_s("%d", &n);
	assert(n < 100);

	printf("정사각형의 넓이 : %d", square(n));

	return 0;
}

int square(int n) {
	int result = 0;
	result = n * n;

	return result;
}