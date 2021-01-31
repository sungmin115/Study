#include "header.h"

int main() {
	int arr[100] = { 0, };
	int i = 0, j=0, num1 = 0;
	while (i<100) {
		printf("%d. 정수를 입력 하시오. : ", i+1);
		scanf_s("%d", &num1);
		if (num1 != -1) {
			arr[i] = num1;
			i++;
		}
		else {
			if(i == 1) {
				printf("%d \n", arr[0]);
				break;
			}else if (i == 2) {
				for (j = i - 2; j < i; j++) {
					printf("%d \n", arr[j]);
				}
				break;
			}else if (i > 2) {
				for (j = i - 3; j < i; j++) {
					printf("%d \n", arr[j]);
				}
				break;
			}
		}
	}
	return 0;
}

void Display_main() {
	printf("'-1'외의 100개의 정수를 입력 하시오. \n");
	printf("만약 '-1'입력시 입력시 -1을 제외한 정수 3개 출력 \n");
}