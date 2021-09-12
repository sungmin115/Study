#include"malloc_char.h"

void main() {
	run();
}

void run() {
	int choice = 0, count=0, size=0;
	char* pnum;
	pnum = (char*)malloc(sizeof(char));
	main_display();
	while (1) {
		printf("원하는 메뉴를 선택 하시오. \n");
		scanf("%d", &choice);
		if (choice == 1 && count ==0) {
			pnum = first_push_data(pnum);
			count++;
		}
		else if (choice == 1 && count > 0) {
			pnum = push_data(pnum);
		}
		else if (choice == 2) {
			pnum = pop_data(pnum);
		}
		else if (choice == 3) {
			show(pnum);
		}
		else if (choice == 4) {
			break;
		}
		else {
			printf("1~4 사이의 숫자를 입력 하시오. \n");
		}
	}
}

char* first_push_data(char* pnum) {
	char user_char = NULL;
	printf("push menu를 선택 하셨습니다. \n");
	scanf(" %c", &user_char);
	pnum[0] = user_char;
	return pnum;
}

char* push_data(char* pnum) {
	int i = 0, pnum_size=0;
	char user_char = NULL;
	pnum_size = _msize(pnum);
	printf("push menu를 선택 하셨습니다. \n");
	char* temp;
	scanf(" %c", &user_char);
	temp = (char*)malloc(sizeof(char)*(pnum_size+1));
	for (i = 0;i< pnum_size;i++) {
		temp[i] = pnum[i];
	}
	free(pnum);
	temp[pnum_size] = user_char;
	pnum = (char*)malloc(sizeof(char) * (pnum_size+1));
	printf("[size] %d\n", _msize(pnum));
	for (i = 0;i< pnum_size +1;i++) {
		pnum[i] = temp[i];
	}
	free(temp);
	return pnum;
}

char* pop_data(char* pnum) {
	int i = 0, change_count=0, pnum_size = 0;
	char user_char = NULL;
	char* temp;
	pnum_size = _msize(pnum);
	printf("pop menu를 선택 하셨습니다. \n");
	scanf(" %c", &user_char);
	temp = (char*)malloc(sizeof(char) * (pnum_size));
	for (i = 0;i< pnum_size;i++) {
		if (pnum[i] != user_char) {
			temp[change_count] = pnum[i];
			change_count++;
		}
	}
	free(pnum);
	pnum = (char*)malloc(sizeof(char)*change_count);
	for (i = 0;i<change_count;i++) {
		pnum[i] = temp[i];
	}
	free(temp);
	return pnum;
}

char* show(char* pnum) {
	int i = 0, pnum_size = 0;
	pnum_size = _msize(pnum);
	for (i = 0;i< pnum_size;i++) {
		printf("%c \n", *(pnum+i));
	}
}