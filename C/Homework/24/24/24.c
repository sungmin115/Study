#include"24.h"

void main() {
	int arr_num[10] = { 0, }, i=0, count_odd =0, count_even =0;
	int* ptr = arr_num;

	printf("Input : \n");
	for (i=0;i<10;i++) {
		scanf("%d", (ptr+i));
	}

	for (i = 0;i<10;i++) {
		if (*(ptr + i) % 2 == 0) {
			count_even++;
		}
		else {
			count_odd++;
		}
	}

	printf("Output : \n");
	printf("odd : %d \n", count_odd);
	printf("even : %d \n", count_even);

	return 0;
}