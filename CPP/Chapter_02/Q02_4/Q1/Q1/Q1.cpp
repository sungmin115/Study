#include<cstring>
#include<iostream>
#pragma warning(disable:4996)
using std::cout;
using std::endl;

int main(void) {
	int num1 = 0;
	char str1[] = "Result";
	char str2[] = "example";
	char str3[30];

	num1 = strlen(str1);
	printf("num1 : %d \n", num1);
	strcpy(str3,str1);
	printf("str1 : %s \n", str1);
	printf("str3 : %s \n", str3);
	strcat(str3,str2);
	printf("str2 : %s \n", str2);
	printf("str3 : %s \n", str3);
	if (strcmp(str1, str2) == 0)
		cout << "문자열이 같다." << endl;
	else
		cout << "문자열이 같지않다." << endl;
	return 0;
}