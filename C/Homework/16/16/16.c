#include "16.h"

void main() {
	int i = 0, j=0;
	Person man[5];
	printf("Input : \n \n");
	for (i = 0; i < 5;i++) {
		man[i] = ReadPersonInfo();
	}

	for (i=0;i<4;i++) {
		for (j = 1;j<5;j++) {
			if(man[i].name>man[j].name)
			acending_info(man, i, j);
		}
	}
	ShowPersonInfo(man[0]);
	return 0;
}

Person ReadPersonInfo(void) {
	Person man;
	printf("Name : ");
	scanf("%s", man.name);
	printf("Hight : ");
	scanf("%d", &man.hight);
	printf("\n");
	return man;
}

void ShowPersonInfo(Person man) {
	printf("Output: \n");
	printf("Name: %s \n", man.name);
	printf("Hight: %d \n", man.hight);
}

void acending_info(Person * man, int i, int j) {
	Person temp;
	temp = man[i];
	man[i] = man[j];
	man[j] = temp;	
}