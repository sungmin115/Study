#include"header_file.h"

typedef struct data {
	int num;
	char* str;
}Data;

void ShowData(Data data) {
	printf("%d \n", data.num);
	printf("%s \n", data.str);
}

Data back_to_main(int num1) {
	if (num1<=10) {
		Data fail = { 0, "fail" };
		return fail;
	}
	else {
		Data success = { num1 * 10, "success" };
		return success;
	}
}

void main() {
	int num1 = 0;
	printf("정수를 입력 하시오.");
	scanf_s("%d",&num1);
	Data data = back_to_main(num1);

	ShowData(data);

	return 0;
}