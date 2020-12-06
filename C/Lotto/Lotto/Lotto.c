#include"Lotto.h"
#define COLUMN 5

int mtm(int ***lotto, int a_i, int user_page) {
	int i = 0;
	int mtm_i = 0,temp = 0;
	int switch_a[6] = { 0 };

	for (i = 0; i < 6; i++) {
		switch_a[i] = lotto[user_page][a_i][i];
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
		lotto[user_page][a_i][i] = switch_a[i];
	}
	return lotto;
}

// 배열 한줄씩 X 한장 씩 5줄.
void show(int ***lotto, int col, int row, int user_page) {
	int i = 0;
	int j = 0;
	for (j=0;j<row;j++) {
		for (i = 0; i < col; i++)
		{
			printf("%d ", lotto[user_page][j][i]);
		}
		printf("\n");
	}
	printf("\n");
}


void random(int ***lotto, int user_row, int user_page) {
	int i = 0, j=0;
	int mtm_i = 0, mtm_j = 0;
	int count = 0, check = 0, temp = 0;

	for (i=0;i<user_row;i++) {
		j = 0;
		while (j < 6)    //로또 숫자 6개가 반복 되는 구간
		{
			lotto[user_page][i][j] = ((rand() % 45) + 1);   // 랜덤 숫자가 만들어지는 구간
			for (count = 0; count < j; count++)  // 처음 만들어진 숫자 부터 현재 만들어진 숫자 전까지 반복
			{
				check = 0;    // 체크 숫자 초기화
				if (lotto[user_page][i][j] == lotto[user_page][i][count])  //숫자가 같은지 체크
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
		mtm(lotto, i, user_page);
	}
}

void Write(int*** lotto, int user_row, int user_page) {
	int i = 0, j=0;
	int mtm_i = 0, mtm_j = 0;
	int num = 0, count = 0, check = 0, temp = 0;

	printf("중복되지 않는 숫자 6개를 입력 하시오 만약 중복된 숫자 입력시 다시 입력 하시오.\n");

	for (i=0;i< user_row;i++) {
		j = 0;
		while (j < 6)    //로또 숫자 6개가 반복 되는 구간
		{
			scanf_s("%d", &num);   // 숫자 입력 구간
			lotto[user_page][i][j] = num;    //작성한 숫자가 배열에 저장 되는 구간
			for (count = 0; count < j; count++)  // 처음 만들어진 숫자 부터 현재 만들어진 숫자 전까지 반복
			{
				check = 0;    // 체크 숫자 초기화
				if (lotto[user_page][i][j] == lotto[user_page][i][count])  //숫자가 같은지 체크
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
		mtm(lotto, i, user_page);
	}
}

void Check_num(int ***arr, int user_row, int ***an, int user_page) {
	int row = 1, col = 6;
	int u_i = 0, u_j = 0, a_i = 0, a_j = 0;
	int count = 0, i=0, check_row =0, check_page =0;

	int*** check_count = (int***)malloc(sizeof(int**) * 1);
	for (check_page=0; check_page<1; check_page++) {
		check_count[check_page] = (int**)malloc(sizeof(int*) * user_row);
		for (check_row =0; check_row <user_row; check_row++)
		{
			check_count[check_page][check_row] = (int*)malloc(sizeof(int) * col);
		}
	}

	for (u_i=0;u_i< user_row;u_i++) {  //유저가 입력한 줄의 값 만큼 반복
		u_j = 0;
		count = 0;
		while (u_j < 6)    // 유저의 한 줄의 대한 반복
		{			
			a_j = 0;
			while (a_j<6) {  //정답에 대한 줄의 반복
				if (arr[user_page][u_i][u_j] == an[0][0][a_j]) {  //정답과 유저의 값이 같다면 count의 증가
					check_count[0][u_i][count] =an[0][0][a_j];
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
		printf("%d줄의 당첨 갯수 : %d ",u_i+1, count);
		printf("[당첨 숫자 : ");
		for (i = 0; i < count; i++) {
			printf("\'%d\'", check_count[0][u_i][i]);
		}
		printf("] \n");
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

void Howmany_pages(int * page) {
	int w_page = 0;

	printf("몇장을 살지 입력 하시오.(최소 1장)");
	scanf_s("%d", &w_page);
	*page = w_page;
}

void Howmany_row(int * row) {
	int w_row = 0;

	printf("몇줄을 살지 입력 하시오.");
	scanf_s("%d", &w_row);
	*row = w_row;
}

void run() {
	int ch = 0;
	int row = 1,i_row =0, an_row=0, col = 6;
	int page = 1,  i_page = 0, an_page=0;
	
	srand(time(NULL));
	int*** an = (int***)malloc(sizeof(int**) * 1);
	for (an_page =0;an_page<1;an_page++) {
		an[an_page] = (int**)malloc(sizeof(int*) * 1);
		for (an_row = 0; an_row < 1; an_row++) {
			an[an_page][an_row] = (int*)malloc(sizeof(int) * col);
		}
	}
	random(an, 1, 0);

	Howmany_pages(&page);
	int*** lotto = (int***)malloc(sizeof(int**) * page);
	for (i_page = 0; i_page < page; i_page++) {
			printf("%d장 ", i_page + 1);
			Howmany_row(&row);
			lotto[i_page] = (int**)malloc(sizeof(int*) * row);
			for (i_row = 0;i_row<row;i_row++) {
				lotto[i_page][i_row] = (int*)malloc(sizeof(int) * col);
			}

			printf("%d장 자동으로 할지 수동 으로 할 지 정하시오.\n", i_page + 1);
			printf("1. 자동  2. 수동 \n");
			scanf_s("%d", &ch);
			if (ch == 1)
			{
				random(lotto, row, i_page);
				show(lotto, 6, row, i_page);
				Check_num(lotto, row, an, i_page);
			}
			else if (ch == 2) {
				Write(lotto, row, i_page);
				show(lotto, 6, row, i_page);
				Check_num(lotto, row, an, i_page);
			}			
	}	

	for (page; page == 0; page--)
	{
		for (row; row == 0; row--)
			free(lotto[page][row]);
		free(lotto[page]);
	}
	free(lotto);

	printf("정답: \n");
	show(an, col, 1, 0);   // 정답 확인용

	for (page; page == 0; page--)
	{
		for (row; row == 0; row--)
			free(an[page][row]);
		free(an[page]);
	}
	free(an);

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