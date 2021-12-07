#include"file_i_o.h"

int main(void) {
	FILE* fp = fopen("hello.txt", "w");
	fputs("hello world", fp);
	fclose(fp);
	return 0;
}