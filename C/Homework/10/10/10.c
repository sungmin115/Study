#include "10.h"

void wavem(int num1) {
	printf("Wavem \n");
	
	if (num1 > 0) {
		num1--;
		wavem(num1);
	}

}

void main() {
	int num1 = 0;
	
	main_display();

	while (1) {
		scanf("%d", &num1);
		if (0<num1 && num1<21) {
			break;
		}
	}

	printf("Input : %d \n", num1);
	printf("Output : \n");
	wavem(num1 -1);

	return 0;
}