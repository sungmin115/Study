#include "06.h"


void main() {
	float r = 0, result = 0;

	Display_main();
	scanf_s("%f", &r);
	result = r * r * PI;

	printf("input: %0.2f", r);
	printf("output: %0.2f", result);

	return 0;
}