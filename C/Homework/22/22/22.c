#include"22.h"

void main() {
	int num1 = 0, num2 = 0;
	int ptr1 = &num1, ptr2 = &num2;

	printf("두 수를 입력 하시오. \n");
	printf("Input : \n");
	scanf("%d", ptr1);
	scanf("%d", ptr2);

	four_rule_calculations(ptr1, ptr2);


	return 0;
}

void four_rule_calculations(int *ptr1, int *ptr2) {
	printf("Output : \n");
	printf("%d + %d = %d \n", *ptr1, *ptr2, *ptr1+*ptr2);
	printf("%d - %d = %d \n", *ptr1, *ptr2, *ptr1-*ptr2);
	printf("%d * %d = %d \n", *ptr1, *ptr2, (*ptr1)*(*ptr2));
	printf("%d / %d = %d \n", *ptr1, *ptr2, (*ptr1)/(*ptr2));
}