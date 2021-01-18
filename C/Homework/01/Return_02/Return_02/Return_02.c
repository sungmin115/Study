#include"header_file.h"

int* back_to_main(int num1) {
	int* back_fail = malloc(sizeof(int)*10);
	int* back_success = malloc(sizeof(int)*10);
	char fail[5] = "fail", success[8] = "success";
	int result = num1 * 10;
	int i = 0;

	if (num1<=10) {
		for (i = 0; i < 4; i++) {
			back_fail[i] = fail[i];
		}
		back_fail[5] = 0;
		return back_fail;
	}
	else {
		for (i = 0; i < 7;i++) {
			back_success[i] = success[i];
		}
		back_success[8] = result;
		return back_success;
	}

}

void main() {
	int num1 = 0, i=0;
	int* fail = {0,};
	int* success = {0, };
	printf("정수를 입력 하시오.");
	scanf_s("%d",&num1);

	if (num1 <= 10) {
		fail = back_to_main(num1);
	}
	else {
		success = back_to_main(num1);
	}
	//char fail[5] = "fail";
	//int len = strlen(fail);

	if (num1<=10) {
		for (i = 0; i < 4; i++) {
			printf("%c", fail[i]);
		}
		printf("%d", fail[5]);
	}
	else {
		for (i = 0; i < 7;i++) {
			printf("%c", success[i]);
		}
		printf("%d", success[8]);
	}
	return 0;
}