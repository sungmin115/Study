#include"04.h"

void main() {
	int arr[100] = { 0, }, num=0, while_i=0, i=0;
	int max = -999, min = 999, max_i = 0, min_i = 0;
	Display_main();
	while (while_i<100) {
		scanf_s("%d", &num);
		if (num == 999) {
			break;
		}
		else if (num > -1000 && num < 999) {
			arr[i] = num;
			i++;
		}
		else {
			printf("잘못된 수를 입력 하셨습니다.");
			break;
		}
		while_i++;
	}
	for (max_i = 0; max_i < i; max_i++) {
		if (arr[max_i] > max) {
			max = arr[max_i];
		}
		else {
			max = max;
		}		
	}
	for (min_i = 0; min_i < i; min_i++) {
		if (arr[min_i] < min) {
			min = arr[min_i];
		}
		else {
			min = min;
		}
	}
	printf("Output: max_%d, min_%d", max, min);
	return 0;
}

void Display_main() {
	printf("세 자리 이하의 정수를 입력 하시오. \n");
	printf("(입력 할 수 있는 최대의 정수는 100개 이하이다.) \n");
	printf("(단, 999가 입력이 되면 프로그램 종료) \n");
}