#include "09.h"

void main() {
	int num1 = 0, i=0, result = 1;

	main_display();
	while (1) {
		scanf("%d", &num1);
		if (0 < num1 && num1 < 21) {
			break;
		}

	}
	for (i = 0; i < num1; i++) {
		result = result * 2;
	}

	printf("Input : %d \n", num1);
	printf("Output : %d \n", result);

	return 0;
}