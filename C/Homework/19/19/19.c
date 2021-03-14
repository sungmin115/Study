#include"19.h"

void main() {
	int num1 = 0, num2 =0;
	int num2_a = 0, num2_b = 0, num2_c = 0;
	printf("세자리 수를 2번 입력 하시오. \n");
	printf("Input : \n");
	scanf("%d", &num1);
	scanf("%d", &num2);

	printf("Output : \n");
	num2_a = num2_b = num2_c = num2;
	num2_a %= 10;
	num2_b = num2_b / 10;
	num2_b %= 10;
	num2_b = num2_b * 10;
	num2_c = num2_c / 100;
	num2_c %= 10;
	num2_c = num2_c * 100;

	printf("%d \n", num1 * num2_a);
	printf("%d \n", num1 * num2_b);
	printf("%d \n", num1 * num2_c);
	printf("%d \n", num1 * num2);

	


	return 0;
}