#include"header_file.h"

int back_to_main(int num1) {
	int result = 0;
	int arr[2] = {0, };


	if (num1<=10) {
		arr[0] = 0;
		arr[1] = "fail";
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
	int arr[2] = { 0, };
	printf("정수를 입력 하시오.");
	scanf_s("%d",&num1);

	printf("%d", back_to_main(num1));

	return 0;
}