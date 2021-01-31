#include"header_file.h"

void run() {
	int arr[4] = { 0, };
	int i = 0;
	
	printf("생각하고 있던 4자리 수를 입력 하시오.");
	
	for (i=0;i<4;i++) {
		scanf_s("%d", arr[i]);
	}

}

void display() {
	printf("--------------  Number_Bassball_Game  -------------- \n");
	printf("1. 문제 내는 사람이 0~9까지 임의의 네자리 수를 입력 \n");
	printf("2. 맞추는 사람이 임의의 네자리 수를 입력 \n");
	printf("3-1. 숫자와 자리가 일치 하면 스트라이크(S) \n");
	printf("3-2. 숫자만 맞으면 볼(B) \n");
	printf("4. 모든 숫자와 모든 자리가 맞으면 게임 종료 \n");
	printf("5. 주의사항 : 중복된 숫자는 입력 금지 \n");
	printf("---------------------------------------------------- \n");
	printf("\n");
}

void main() {
	display();
	run();

	return 0;
}