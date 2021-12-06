#include"Q2.h"

void main() {
	srand(time(NULL));
	for (int i = 0;i<5;i++) {
		printf("number %d : %d \n", i+1, rand()%100);
	}
}