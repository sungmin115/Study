#include<stdio.h>

int main(void) {
	int i = 100, j=100, result = 0;

	for (j;j>=0;j--) {
		i = j;
		for (i; i >= 0; i--) {
			result = result + i;
		}
		printf("%d \n", result);
		result = 0;
	}
	return 0;
}