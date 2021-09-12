#include<stdio.h>

void main() {
	int i = 0, j = 0,k=0, count=0;

	for (i = 0;i<3;i++) {
		for (j=1;j<10;j++) {
			if (count<30) {
				for (k=1;k<4;k++) {
					printf("%d X %d = %d ", k, j, j*k);
					count++;
				}
				printf("\n");
			}
			else if (count<60) {
				for (k = 4;k<7;k++) {
					printf("%d X %d = %d ", k, j, j*k);
					count++;
				}
				printf("\n");
			}
			else{
				for (k = 7;k<10;k++) {
					printf("%d X %d = %d ", k, j, j*k);
				}
				printf("\n");
			}
		}
	}
}