#include"28_210322.h"

void main() {
	run();
	return 0;
}

void run() {
	int number_first = 0, number_second = 0;
	char operator = 0;

	show_main();
	number_first = input_number(number_first);
	number_second = input_number(number_second);
	operator = input_char(operator);
	show_result(number_first, number_second, operator);
}

void show_main() {
	printf("두 정수와 한 개의 연산자(+, -, *, /, %)를 입력 하시오. \n");
}

int input_number(int number) {
	while (1) {
		scanf("%d", &number);
		fflush(stdin);
		if (number > 0) {
			break;
		}
	}
	return number;
}

char input_char(char charactor) {
	while(1) {
		fflush(stdin);
		scanf(" %c", &charactor, sizeof(charactor));
		fflush(stdin);
		if (charactor >0) {
			break;
		}
	}
	return charactor;
}
void show_result(int number_first, int number_second, char charactor) {
	switch (charactor)
	{
	case '+' :
		printf("%d + %d = %d", number_first, number_second, number_first + number_second);
		break;
	case '-':
		printf("%d - %d = %d", number_first, number_second, number_first - number_second);
		break;
	case '*':
		printf("%d * %d = %d", number_first, number_second, number_first * number_second);
		break;
	case '/':
		printf("%d / %d = %d", number_first, number_second, number_first / number_second);
		break;
	case '%':
		printf("%d % %d = %d", number_first, number_second, number_first % number_second);
	}
}