#include "17.h"

void main() {
	int count = 0, i = 0, j = 0;
	Person man[50];

	printf("Input : \n");
	printf("(Name / Hight / Weight) \n");


	while (1) {
		printf("Person_%d \n", count + 1);
		man[count] = ReadPersonInfo();
		if (strcmp(man[count].name, "End") != 0)
			count++;
		else {
			man[count].hight = 0;
			man[count].weight = 0.0;
			count++;
			break;
		}
	}

	for (i =0;i<count -2;i++) {
		for (j = i+1;j<count -1;j++) {
			if (strcmp(man[i].name, man[j].name)>0) {
				Temp_person(man, i, j);
			}
		}
	}

	printf("Output : \n");
	printf("Name \n");
	for (i=0;i<count -1;i++) {
		ShowPersonInfo(man[i]);
	}
	printf("\n");

	for (i = 0; i < count - 2; i++) {
		for (j = i + 1; j < count - 1; j++) {
			if (man[i].weight < man[j].weight) {
				Temp_person(man, i, j);
			}
		}
	}

	printf("Weight \n");
	for (i = 0; i < count - 1; i++) {
		ShowPersonInfo(man[i]);
	}

	return 0;
}

Person ReadPersonInfo(void) {
	Person man;
	scanf("%s", man.name);
	if (strcmp(man.name, "End")!=0) {
		scanf("%d", &man.hight);
		scanf("%f", &man.weight);
		printf("\n");
	}
	else
		printf("\n");
	return man;
}

void ShowPersonInfo(Person man) {
	printf("Name : %s \n", man.name);
	printf("Hight : %d \n", man.hight);
	printf("Weight : %.1f \n", man.weight);
	printf("\n");
}

void Temp_person(Person * man, int i, int j) {
	Person temp;
	temp = man[i];
	man[i] = man[j];
	man[j] = temp;
}