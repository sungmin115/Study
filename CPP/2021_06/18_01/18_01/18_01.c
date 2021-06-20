#include"18_01.h"

void main() {
	int** twoPoin;
	int oneUser = 0, twoUser = 0;
	scanf("%d", &oneUser);
	scanf("%d", &twoUser);
	twoPoin = (int**)malloc(sizeof(int*)* twoUser);
	for (int i = 0; i < twoUser; i++) {
		twoPoin[i] = (int*)malloc(sizeof(int) * oneUser);
	}




	for (int i = 0;i<twoUser;i++) {
		free(twoPoin[i]);
		twoPoin[i] = NULL;
	}
	free(twoPoin);

	twoPoin = NULL;
}