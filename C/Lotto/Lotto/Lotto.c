#include"Lotto.h"
#define ROW 3
#define COLUMN 5



//3 && 5 대신 전처리기를 사용하여 ROW , COLUMN 을 이용해주세요.
int mtm(int *arr) {
	int i = 0, j = 0, temp = 0;
	
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COLUMN; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}


// 배열 한줄씩 X 한장 씩 5줄.
int show(int **arr) {
	int i = 0;
	int j = 0;
	for (j=0;j<5;j++) {
		for (i = 0; i < 6; i++)
		{
			printf("%d ", arr[j][i]);
		}
		printf("\n");
	}
	printf("\n");
}


random(int* arr) {
	int i = 0;
	int count = 0;
	int check = 0;

	while (i < 6)    //로또 숫자 6개가 반복 되는 구간
	{
		arr[i] = ((rand() % 45) + 1);   // 랜덤 숫자가 만들어지는 구간
		for (count = 0; count < i; count++)  // 처음 만들어진 숫자 부터 현재 만들어진 숫자 전까지 반복
		{
			check = 0;    // 체크 숫자 초기화
			if (arr[i] == arr[count])  //숫자가 같은지 체크
			{
				check = 1;  //만약 숫자가 같다면 같은 부분에 다른 숫자를 넣기 위한 장치
				break;
			}
		}
		if (check == 0)
		{
			i++;  // 같은 숫자가 아니라면 다음으로 넘어가겠다는 표시
		}
	}
}

int Write(int** arr) {
	int i = 0;
	int j = 0;
	int num = 0;
	int count = 0;
	int check = 0;

	printf("중복되지 않는 숫자 6개를 입력 하시오 만약 중복된 숫자 입력시 다시 입력 하시오.\n");

	for (j=0;j<5;j++) {
		while (i < 6)    //로또 숫자 6개가 반복 되는 구간
		{
			scanf_s("%d", &num);   // 숫자 입력 구간
			arr[j][i] = num;    //작성한 숫자가 배열에 저장 되는 구간
			for (count = 0; count < i; count++)  // 처음 만들어진 숫자 부터 현재 만들어진 숫자 전까지 반복
			{
				check = 0;    // 체크 숫자 초기화
				if (arr[j][i] == arr[count])  //숫자가 같은지 체크
				{
					check = 1;  //만약 숫자가 같다면 같은 부분에 다른 숫자를 넣기 위한 장치
					break;
				}
			}
			if (check == 0)
			{
				i++;  // 같은 숫자가 아니라면 다음으로 넘어가겠다는 표시
			}
		}
	}
}

//한장에 대한 A줄, B줄....에대한 당첨 여부 부탁드려요. 당첨은 1등부터 5등까지요.
void Check_num(int* arr) {
	int an[6] = { 0 };
	int i_check = 0;
	int count = 0;

	random(&an);

	//printf("정답: \n");
	//show(&an);   // 정답 확인용

	while (i_check < 6) {
		if (an[i_check] == arr[i_check])
		{
			count++;
			i_check++;

		}
		else if (an[i_check] != arr[i_check]) {
			i_check++;
		}
		if (count == 6)
		{
			printf("당첨 되었습니다. \n");
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
	return &w_row; // retun 반환형 확인 요청. 
}


void run() {
	int ch = 0;
	int row = 1, i_row = 0;
	int page = 1,  i_page = 0;
	int lotto[5][6]={0};
	srand(time(NULL));
	
	Howmany(&row);

	for (i_page = 0; i_page < page; i_page++) {
		for (i_row=0;i_row<row;i_row++) {
			printf("%d장 %d줄 자동으로 할지 수동 으로 할 지 정하시오.\n", i_page+1, i_row+1);
			printf("1. 자동  2. 수동 \n");
			scanf_s("%d", &ch);

			if (ch == 1)
			{
				random(&lotto);
				mtm(&lotto);
				show(&lotto);
				Check_num(&lotto);
			}
			else if (ch == 2) {
				Write(&lotto);
				mtm(&lotto);
				show(&lotto);

				Check_num(&lotto);
			}
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