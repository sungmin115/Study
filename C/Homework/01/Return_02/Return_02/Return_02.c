#include"header_file.h"

char* back_to_main(int num1) {
	int result = 0;
	int arr[20] = {0, };
	char fail[5] = "fail";
	int i = 0;

	if (num1<=10) {
		for (i = 0; i < 4; i++) {
			arr[i] = fail[i];
		}
		arr[5] = 0;
		return arr;
	}
	else {
		arr[0] = num1 * 10;
		arr[1] = "success";
		return arr;
	}

}

void main() {
	int num1 = 0;
	char * fail;
	printf("정수를 입력 하시오.");
	scanf_s("%d",&num1);

	fail = back_to_main(num1);
	//char fail[5] = "fail";
	//int len = strlen(fail);

	if (num1<10) {
		for (int i = 0; i < 4; i++) {
			printf("%c", fail[i]);
		}
		printf("%d", fail[5]);
	}
	return 0;
}