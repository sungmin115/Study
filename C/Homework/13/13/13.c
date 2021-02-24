#include"13.h"

void main(){
	char arr1[20] = { 0, }, arr2[20] = { 0, };

	main_display();

	scanf("%s", arr1);
	scanf("%s", arr2);
	printf("\n");

	printf("Input : \n");
	Show_arr(arr1);
	Show_arr(arr2);
	printf("\n");

	printf("Output : \n");
	printf("%d", count_arr(arr1, arr2));

	return 0;
}

void main_display() {
	printf("두 개의 문자열을 입력 받아서 두 문자열의 길이의 합을 출력하는 프로그램 \n");
	printf("각 문자열의 길이는 20자 미만이다. \n");
	printf("두 개의 문자열을 입력 하시오. \n");
}

void Show_arr(char *arr) {
	printf("%s \n", arr);
}

int count_arr(char* arr1, char* arr2) {
	int num1 = 0, num2 = 0, sum = 0;

	while (arr1[num1] != 0)
		num1++;
	while (arr2[num2] != 0)
		num2++;
	sum = num1 + num2;

	return sum;
}