#include"05_01.h"

int checkStr(char* str1, char* str2) {
	return strcmp(str1, str2, 1) ? 1 : 0;
}

void main() {
	char str1[5] = "hello";
	char str2[5] = "hello";

	//str1 = "hello";
	//str2 = "hello";

	printf("%d",checkStr(str1, str2));

}