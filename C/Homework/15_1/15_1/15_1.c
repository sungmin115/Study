#include"15_1.h"

void main() {
	Person man = ReadPersonInfo();
	ShowPersonInfo(man);
	return 0;
}

Person ReadPersonInfo(void) {
	Person man;
	printf("Input : \n");
	printf("Name? ");
	scanf("%s", man.name);
	printf("Company? ");
	scanf("%s", man.company_name);
	printf("Company_number? ");
	scanf("%d", &man.company_number);
	return man;
}

void ShowPersonInfo(Person man) {
	printf("Output : \n");
	printf("Name: %s \n", man.name);
	printf("Company : %s \n", man.company_name);
	printf("Number: %d \n", man.company_number);
}