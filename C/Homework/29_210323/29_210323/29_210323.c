#include"29_210323.h"

void main() {
	run();
	return 0;
}

void run() {
	int st_n = 0, i = 0;
	double* st;

	show_main();
	st_n = input_student_number(st_n);
	st = (int*)malloc(sizeof(int) * st_n);
	for (i = 0;i<st_n;i++) {
		printf("%d번째 학생 \n", i+1);
		st[i] = input_score_aver();
	}
	up_number(st,st_n);
}

void show_main() {
	printf("각 학생에 해당하는 3과목 점수의 평균을 구하여\n");
	printf("점수가 높은 순으로 출력하는 프로그램 \n");
	printf("학생의 수를 입력 하시오. \n");
	printf("(학생의 수는 2이상 100이하 이다.) \n");	
}

int input_student_number(int st_n) {
	while (1) {
		scanf("%d", &st_n);
		if (2<= st_n && st_n <=100){
			break;
		}
	}
	return st_n;
}

double input_score_aver() {
	int i = 0;
	int student_score[3] = { 0, 0, 0};
	double sum =0, aver = 0;
	for (i=0;i<3;i++) {
		while (1) {
			printf("%d번째 과목 : ", i+1);
			scanf("%d", &student_score[i]);
			if (student_score[i]>0 && student_score[i]<=100) {
				break;
			}
		}
	}
	for (i=0;i<3;i++) {
		sum = sum + student_score[i];
	}
	aver = (double)sum / 3;
	return aver;
}

void up_number(double st[], int st_n) {
	int i = 0, j=0;
	double temp = 0;
	for (i=0;i<st_n-1;i++) {
		for (j = i+1;j<st_n;j++) {
			if (st[i]<st[j]) {
				temp = st[i];
				st[i] = st[j];
				st[j] = temp;
			}
		}
	}
	show_number(st, st_n);
}

void show_number(double st[], int st_n) {
	int i = 0;
	for (i = 0;i<st_n;i++) {
		printf("%d등 평균 : ", i+1);
		printf("%.1f \n", st[i]);
	}
}

