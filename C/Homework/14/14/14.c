#include"14.h"

void main() {
	char arr[20] = { 0, }, exit[20] = "END";
	int i = 0, len =0, compare =0;
	
	main_display();

	while (1) {
		scanf("%s", &arr);
		compare = strcmp(arr, exit);
		if (compare == 0) {
			break;
		}
		else{
			while (arr[len] != 0)
				len++;
			for(i = len -1; i >= 0; i--){
				printf("%c", arr[i]);
			}
			printf(" \n");
			len = 0;
		}
	}
	return 0;
}


void main_display() {
	printf("한 개의 단어를 입력 받아 거꾸로 뒤집어 출력하는 프로그램 \n");
	printf("종료를 원하면 \'END\'를 입력 \n");
}