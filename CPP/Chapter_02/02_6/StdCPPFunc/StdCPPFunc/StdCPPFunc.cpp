#include<cmath>
#include<cstdio>
#include<cstring>
#pragma warning(disable:4996)
using namespace std;

int main(void) {
	char str1[] = "Result";
	char str2[30];

	strcpy(str2, str1);
	printf("%s: %f \n", str1, sin(0.14));
	printf("%s: %f \n", str2, abs(-1.25));
	return 0;
}