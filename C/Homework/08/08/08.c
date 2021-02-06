#include"08.h"

int main() {
	float arr[3] = { 0,};
	int i = 0;
	printf("-1000이상 1000이하의 실수 3개를 입력 하시오. \n");
	for (i = 0; i < 3; i++) {
		while (1) {
			scanf("%f", &arr[i]);
			if (arr[i] < 1000 && arr[i]>-1000) {
				break;
			}
			else {
				printf("-1000이상 1000이하의 실수를 입력하시오. \n");
			}
		}
	}

	buble_sort(arr, 3);

	printf("%.01f \n", ceil(arr[0]));  //올림
	printf("%.01f \n", floor(arr[2]));  //내림
	printf("%.01f \n", floor(arr[1] + 0.5));  //반올림


	return 0;
}

int buble_sort(int arr[], int n) {
	int i = 0, j = 0, temp = 0;

	for (i = 0; i < n-1;i++) {
		for (j = 0; j < n-1-i;j++) {
			if (arr[i] > arr[i + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}