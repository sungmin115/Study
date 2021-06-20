#include"21_06_19.h"

void main() {
	char** twopoin;
	int i = 0, j = 0, user_count = 0, count = 0, first_count=0, star_count = 1, space_count = 0;
	char space = ' ', star = '*';

	printf("피라미드를 만들고 싶은 크기의 홀수를 입력 하시오. \n");
	scanf("%d", &user_count);
	first_count = (user_count - 1) / 2;
	space_count = first_count;
	twopoin = (char**)malloc(sizeof(char*) * user_count);
	for (i = 0; i < user_count; i++) {
		twopoin[i] = (char*)malloc(sizeof(char) * user_count);
	}

	for (i = 0; i < first_count; i++) {
		count = 0;
		for (j = 0; j < space_count; j++) {
			twopoin[i][count] = space;
			count++;
		}
		for (j = 0; j < star_count; j++) {
			twopoin[i][count] = star;
			count++;
		}
		for (j = 0; j < space_count; j++) {
			twopoin[i][count] = space;
			count++;
		}
		space_count = space_count - 1;
		star_count = star_count + 2;
	}
	i = (user_count - 1) / 2;
	for (j = 0; j < star_count; j++) {
		twopoin[i][j] = star;
	}
	space_count = space_count + 1;
	star_count = star_count - 2;
	for (i = (user_count - 1) / 2 + 1; i < user_count; i++) {
		count = 0;
		for (j = 0; j < space_count; j++) {
			twopoin[i][count] = space;
			count++;
		}
		for (j = 0; j < star_count; j++) {
			twopoin[i][count] = star;
			count++;
		}
		for (j = 0; j < space_count; j++) {
			twopoin[i][count] = space;
			count++;
		}
		space_count = space_count + 1;
		star_count = star_count - 2;
	}

	for (i = 0; i < user_count; i++) {
		for (j = 0; j < user_count; j++) {
			printf("%c", twopoin[i][j]);
		}
		printf("\n");
	}


	for (i = 0; i < user_count; i++) {
		free(twopoin[i]);
		twopoin[i] = NULL;
	}
	free(twopoin);
	twopoin = NULL;
}