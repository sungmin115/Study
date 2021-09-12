#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void main() {
    int kor=0, mat=0, eng=0;
    int sum=0;
    float average=0.0;

    printf("국어 점수를 입력하시오: ");
    scanf("%d", &kor);
    printf("\n");
    printf("수학 점수를 입력하시오: ");
    scanf("%d", &mat);
    printf("\n");
    printf("영어 점수를 입력하시오: ");
    scanf("%d", &eng);
    printf("\n");

    printf("국어 점수: %d \n", kor);
    printf("수학 점수: %d \n", mat);
    printf("영어 점수: %d \n", eng);

    sum = kor + mat + eng;
    printf("과목 총점수: %d\n", sum);

    average = (float)sum / 3;
    printf("평균 점수: %.2f", average);
}