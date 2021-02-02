#include"05.h"

void main() {
	int arr[100] = { 0, }, i = 0, j = 0;
	char al = 0;

	while (i < 100) {
		scanf_s("%c", &al);
		if (al>='A' && al<='Z') {
			arr[i] = al;
			i++;
		}else{
			break;
		}		
	}

	printf("Input: \n");
	for (j = 0; j < i;j++) {
		printf("%c", arr[j]);
	}

	return 0;
}