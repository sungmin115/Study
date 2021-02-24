#include"12.h"

void main() {
	int num1 = 0, num2 =0;
	
	main_display();
	scanf("%d", &num1);
	if (num1 % 2 == 1) {
		num2 = 1;
	}
	else {
		num2 = 2;
	}
	count(num1, num2);

	return 0;
}