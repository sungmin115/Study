#include<stdio.h>
#pragma warning(disable:4996)

void main() {
	char* name;
	name = (char*)malloc(sizeof(char)*10);

	scanf("%s", name);
	printf("%s \n", name);
	free(name);
}