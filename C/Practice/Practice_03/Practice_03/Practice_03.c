#include<stdio.h>

int main(void) {
	int i = 0, result = 0;

	while (i != 101) {
		result = result + i;
		i++;
	}

	printf("%d", result);
}