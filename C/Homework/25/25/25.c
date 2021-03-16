#include"25.h"

void main() {

	show_example();
	Input_main();

	return 0;
}

void show_example() {
	int i = 0,j=0;
	printf("삼각형의 높이 n과 종류 m을 입력 하시오.\n");
	printf("단, 삼각형의 크기 n의 크기는 100이하의 자연수 이며 \n");
	printf("종류는 1부터 3사이의 자연수 이다. \n");
	printf("종료를 원한다면 n값에 101을 입력 \n");
	printf("종류 m은 3가지가 있으며 각각 아래와 같이 출력 한다. \n");
	printf("First - 1 : \n");
	show_menu_1(4);
	printf("Second - 2 : \n");
	show_menu_2(4);
	printf("Third - 3 : \n");
	show_menu_3(4);
}

void Input_main() {
	int n = 0, m = 0;
	printf("Input : \n");
	while (1) {
		printf("삼각형의 높이 n값 입력 : ");
		scanf("%d", &n);
		if (n <= 100) {
			printf("종류 m값 입력 : ");
			scanf("%d", &m);
			if (m <= 3 && m>0) {
				select_menu(n, m);
			}else {
				printf("INPUT ERROR! \n");
			}
		}
		else if(n == 101){
			break;
		}else {
			printf("INPUT ERROR! \n");
		}
	}
}

void select_menu(int n, int m) {
	switch (m) {
	case 1:
		show_menu_1(n);
		break;
	case 2:
		show_menu_2(n);
		break;
	case 3:
		show_menu_3(n);
	}
}

void show_menu_1(int n) {
	int i = 0, j=0;
	for (i=0;i<n;i++) {
		for (j=0;j<i+1;j++) {
			printf("*");
		}
		printf("\n");
	}
}

void show_menu_2(int n) {
	int i = 0, j = 0;
	for (i=0;i<n;i++) {
		for (j=n;j>i;j--) {
			printf("*");
		}
		printf("\n");
	}
}

void show_menu_3(int n) {
	int i = 0, j = 0, k=1;
	for (i=0;i<n;i++) {
		for (j=n;j>i;j--) {
			printf(" ");
		}
		for (k=0;k<2*(i+1)-1;k++) {
			printf("*");
		}
		printf("\n");
	}
}