#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void main() {
    int kor=0, mat=0, eng=0;
    int sum=0;
    float average=0.0;

    printf("���� ������ �Է��Ͻÿ�: ");
    scanf("%d", &kor);
    printf("\n");
    printf("���� ������ �Է��Ͻÿ�: ");
    scanf("%d", &mat);
    printf("\n");
    printf("���� ������ �Է��Ͻÿ�: ");
    scanf("%d", &eng);
    printf("\n");

    printf("���� ����: %d \n", kor);
    printf("���� ����: %d \n", mat);
    printf("���� ����: %d \n", eng);

    sum = kor + mat + eng;
    printf("���� ������: %d\n", sum);

    average = (float)sum / 3;
    printf("��� ����: %.2f", average);
}