#include"18_01.h"

void main() {
	int* poin;
	int num, user=0;
	scanf("%d", &user);
	poin = (int*)molloc(sizeof(int) * user);

	free(poin);
	poin = NULL;
}