#include"27_210319.h"

void main() {
	run();
	return 0;
}

void run() {
	int year = 0;
	show_main();
	while (1) {
		year = input_year();
		check_year(year);
	}
}

void show_main() {
	printf("연도를 입력 하시오. \n");
	printf("연도는 1보다 크거나 같고, 4000보다 작거나 같은 자연수이다 \n");
}

int input_year() {
	int year = 0;
	while (1) {
		scanf("%d", &year);
		if (1 <= year && year <= 4000) {
			break;
		}
	}
	return year;
}
void check_year(int year) {
	if (year%4 == 0) {
		printf("1 \n");
	}
	else{
		printf("0 \n");
	}
}