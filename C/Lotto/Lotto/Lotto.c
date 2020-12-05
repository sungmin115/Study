#include"Lotto.h"
#define COLUMN 5

int mtm(int (*arr)[6], int a_i) {
	int i = 0;
	int mtm_i = 0,temp = 0;
	int switch_a[6] = { 0 };

	for (i = 0; i < 6; i++) {
		switch_a[i] = arr[a_i][i];
	}
	for (mtm_i = 0; mtm_i < COLUMN; mtm_i++)
	{
		for (i = 0; i < COLUMN - mtm_i; i++)
		{
			if (switch_a[i] > switch_a[i+1])
			{
				temp = switch_a[i];
				switch_a[i] = switch_a[i+1];
				switch_a[i+1] = temp;
			}
		}
	}
	for (i = 0; i < 6; i++) {
		arr[a_i][i] = switch_a[i];
	}
	return arr;
}

// 배열 한줄씩 X 한장 씩 5줄.
void show(int (*arr)[6], int col, int row) {
	int i = 0;
	int j = 0;
	for (j=0;j<row;j++) {
		for (i = 0; i < col; i++)
		{
			printf("%d ", arr[j][i]);
		}
		printf("\n");
	}
	printf("\n");
}


void random(int arr[5][6], int user_data) {
	int i = 0, j=0;
	int mtm_i = 0, mtm_j = 0;
	int count = 0, check = 0, temp = 0;

	for (i=0;i<user_data;i++) {
		j = 0;
		while (j < 6)    //로또 숫자 6개가 반복 되는 구간
		{
			arr[i][j] = ((rand() % 45) + 1);   // 랜덤 숫자가 만들어지는 구간
			for (count = 0; count < j; count++)  // 처음 만들어진 숫자 부터 현재 만들어진 숫자 전까지 반복
			{
				check = 0;    // 체크 숫자 초기화
				if (arr[i][j] == arr[i][count])  //숫자가 같은지 체크
				{
					check = 1;  //만약 숫자가 같다면 같은 부분에 다른 숫자를 넣기 위한 장치
					break;
				}
			}
			if (check == 0)
			{
				j++;  // 같은 숫자가 아니라면 다음으로 넘어가겠다는 표시
			}
		}
		mtm(arr, i);
	}
}

void Write(int arr[5][6], int user_data) {
	int i = 0, j=0;
	int mtm_i = 0, mtm_j = 0;
	int num = 0, count = 0, check = 0, temp = 0;

	printf("중복되지 않는 숫자 6개를 입력 하시오 만약 중복된 숫자 입력시 다시 입력 하시오.\n");

	for (i=0;i< user_data;i++) {
		j = 0;
		while (j < 6)    //로또 숫자 6개가 반복 되는 구간
		{
			scanf_s("%d", &num);   // 숫자 입력 구간
			arr[i][j] = num;    //작성한 숫자가 배열에 저장 되는 구간
			for (count = 0; count < j; count++)  // 처음 만들어진 숫자 부터 현재 만들어진 숫자 전까지 반복
			{
				check = 0;    // 체크 숫자 초기화
				if (arr[i][j] == arr[i][count])  //숫자가 같은지 체크
				{
					check = 1;  //만약 숫자가 같다면 같은 부분에 다른 숫자를 넣기 위한 장치
					break;
				}
			}
			if (check == 0)
			{
				j++;  // 같은 숫자가 아니라면 다음으로 넘어가겠다는 표시
			}
		}
		mtm(arr, i);
	}
}

//한장에 대한 A줄, B줄....에대한 당첨 여부 부탁드려요. 당첨은 1등부터 5등까지요.
void Check_num(int(*arr)[6], int user_data) {
	int an[5][6] = { 0 };
	//int i_check = 0;
	int count = 0;
	int u_i = 0, u_j = 0,a_i=0, a_j =0;

	random(&an, 1);
	printf("정답: \n");
	show(&an, 6, 1);   // 정답 확인용

	for (u_i=0;u_i<user_data;u_i++) {  //유저가 입력한 줄의 값 만큼 반복
		u_j = 0;
		count = 0;
		while (u_j < 6)    // 유저의 한 줄의 대한 반복
		{
			
			a_j = 0;
			while (a_j<6) {  //정답에 대한 줄의 반복
				if (arr[u_i][u_j] == an[0][a_j]) {  //정답과 유저의 값이 같다면 count의 증가
					count++;
					u_j++;
					break;
				}
				else {    //정답이 맞지 않다면 계속 체크
					a_j++;
				}
			}
			u_j++;

		}
		printf("%d줄의 당첨 갯수 : %d \n",u_i+1, count);
		switch (count) {
		case 6:
			printf("1등에 당첨 되셨습니다. \n \n");
			break;
		case 5:
			printf("2등에 당첨 되셨습니다. \n \n");
			break;
		case 4:
			printf("3등에 당첨 되셨습니다. \n \n");
			break;
		case 3:
			printf("4등에 당첨 되셨습니다. \n \n");
			break;
		case 2:
			printf("5등에 당첨 되셨습니다. \n \n");
			break;
		default:
			printf("낙첨 되셨습니다. \n \n");
		}
	}
}

// 몇장은 추후 기능 개선으로 하시고 몇줄을 살지 정하시돼 이차원 배열로 부탁드립니다.
void Howmany(int * row) {
	int w_row = 0;
	//int w_page = 0;

	printf("몇줄을 살지 입력 하시오.");
	scanf_s("%d", &w_row);
	/*printf("몇장을 살지 입력 하시오.(최소 1장)");
	scanf_s("%d", &w_page);
	*page = w_page;*/
	*row = w_row;
}


void run() {
	int ch = 0;
	int row = 1;
	int i_row = 0;
	int page = 1,  i_page = 0;
	int lotto[5][6]={0};
	srand(time(NULL));
	
	Howmany(&row);

	for (i_row = 0; i_row < page; i_row++) {
			printf("%d장 자동으로 할지 수동 으로 할 지 정하시오.\n", i_row +1);
			printf("1. 자동  2. 수동 \n");
			scanf_s("%d", &ch);
			if (ch == 1)
			{
				random(&lotto, row);
				show(lotto, 6, row);
				Check_num(&lotto, row);
			}
			else if (ch == 2) {
				Write(&lotto, row);
				show(lotto, 6, row);
				Check_num(&lotto, row);
			}
	}
	return 0;
}

void display() {
	printf("-----로또 만들기-----\n");
	printf("A [ ][ ][ ][ ][ ][ ]\n");
	printf("B [ ][ ][ ][ ][ ][ ]\n");
	printf("C [ ][ ][ ][ ][ ][ ]\n");
	printf("D [ ][ ][ ][ ][ ][ ]\n");
	printf("E [ ][ ][ ][ ][ ][ ]\n");
	printf(" - 위와 같은 2차원 배열을 구성한다.\n");
	printf("  기능!!\n");
	printf("  1)구입 : 구입은 최소 1게임에서 최대 5게임이 가능하다.\n");
	printf("	- 구입 방법: 수동(사용자입력), 자동( 랜덤하게 생성 1~45)\n");
	printf("	- 같은 게임에는 중복된 숫자를 허용하지 않는다.\n");
}


int main(void)
{
	display(); //초기 화면
	run(); //시작함수	
}