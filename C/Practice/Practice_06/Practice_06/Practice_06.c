#include<stdio.h>

int main(void) {
	int i = 100, j = 100, k=100, result = 0;

	for (j; j >= 0; j--) {
		k = k - j;
		for (i=j; i >= k ; i--) {
			result = result + i;
		}
		printf("%d \n", result);
		result = 0;
		k = 100;
	}
	return 0;
}