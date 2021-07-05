#include"21_06_26.h"

void main() {
	int count = 0, userCount = 0, spaceCount = 0, oneStarCount = 0;
	int i = 0, j=0, k=0, height = 0;
	char space = ' ', oneStar = '*';
	STAR *star;
	printf("만들고 싶은 마름모의 갯수를 입력 하시오. \n");
	scanf("%d", &userCount);
	star = (STAR*)malloc(sizeof(STAR)* userCount);
	memset(star,0,sizeof(STAR));
	for (i=0;i< userCount;i++) {
		printf("%d번째 마름모의 이름을 입력 하시오. \n", i+1);

		star[i].name = (char*)malloc(sizeof(char) * 10);

		//memset(star[i].name, NULL, sizeof(char*) * 10);

		scanf("%s", star[i].name);


		printf("%d 번째 마름모의 높이를 입력 하시오. \n", i+1);
		printf("단, 높이의 숫자는 홀수 \n");
		while (1) {
			scanf("%d", &star[i].height);
			height = star[i].height;
			if (height%2 != 0) {
				oneStarCount = 1;
				star[i].data = (char**)malloc(sizeof(char*) * height);
				for (j=0;j<height;j++) {
					star[i].data[j] = (char*)malloc(sizeof(char)*height);
				}
				for (j=0;j<height;j++) {
					memset(star[i].data[j], NULL, sizeof(char*)*height);
				}
				spaceCount = (height-1)/2;
				for (j=0;j<(height-1)/2;j++) {
					count = 0;
					for (k=0;k<spaceCount;k++) {
						star[i].data[j][count] = space;
						count++;
					}
					for (k = 0;k<oneStarCount;k++) {
						star[i].data[j][count] = oneStar;
						count++;
					}
					for (k = 0;k<spaceCount;k++) {
						star[i].data[j][count] = space;
						count++;
					}
					spaceCount = spaceCount - 1;
					oneStarCount = oneStarCount + 2;
				}
				j = (height - 1) / 2;
				for (count=0;count<height;count++) {
					star[i].data[j][count] = oneStar;
				}
				spaceCount = spaceCount + 1;
				oneStarCount = oneStarCount - 2;
				for (j=j+1;j<height;j++) {
					count = 0;
					for (k=0;k<spaceCount;k++) {
						star[i].data[j][count] = space;
						count++;
					}
					for (k = 0; k < oneStarCount; k++) {
						star[i].data[j][count] = oneStar;
						count++;
					}
					for (k = 0; k < spaceCount; k++) {
						star[i].data[j][count] = space;
						count++;
					}
					spaceCount = spaceCount + 1;
					oneStarCount = oneStarCount - 2;
				}
				break;
			}
			else {
				printf("홀수를 입력하시오.");
			}
		}
	}


	for (i=0;i<userCount;i++) {
		printf("%s\n", star[i].name);
		for (j=0;j<star[i].height;j++) {
			for (k = 0;k< star[i].height;k++) {
				printf("%c", star[i].data[j][k]);
			}
			printf("\n");
		}
	}
	for (i = 0; i< userCount ; i++) {
		for (j = 0; j < height; j++) {
			free(star[i].data[j]);
			star[i].data[j] = NULL;
		}
		free(star[i].data);
		star[i].data = NULL;
		free(star[i].name);
		star[i].name = NULL;
	}
	free(star);
	star = NULL;
}