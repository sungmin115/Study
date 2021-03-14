#include"21.h"

void main() {
	int num = 0, i=0;
	int* ptr = &num;

	printf("100이하의 수를 입력 하시오. \n");
	scanf("%d", ptr);

	printf("Input : \n");
	printf("%d \n", *ptr);
	printf("Output : \n");
	for (i=0;i<*ptr;i++) {
		printf("*");
	}
	

	return 0;
}