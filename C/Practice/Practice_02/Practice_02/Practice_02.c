#include<stdio.h>

int main(void) {
	int i = 0, result =0;

	for (i=0;i<=100;i++) {
		result = result + i;
	}
	printf("%d", result);
}