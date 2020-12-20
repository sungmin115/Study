#include"Parking_lot.h"


typedef struct Point
{
    int x;
    int y;
}POINT;

typedef struct Stime
{
    int h;
    int m;
    int s;
}STIME;

typedef struct Car
{
    int numb;
    char type[20];
    POINT* point;
    STIME* stime;
}CAR;

typedef struct Parking {
    CAR** car;    //or CAR[][] car
}PARKING;


void Howmany_POINT(int* row, int* col, int* floor) {
    int user_row = 0, user_col = 0, user_floor = 0;
    printf("주차장 세로의 길이를 입력 하세요 : ");
    scanf_s("%d", &user_row);
    *row = user_row;
    
    printf("주차장 가로의 길이를 입력 하세요 : ");
    scanf_s("%d", &user_col);
    *col = user_col;

    printf("주차장 층수를 입력 하세요 : ");
    scanf_s("%d", &user_floor);
    *floor = user_floor;
}

void run() {
    int row = 0, col = 0, floor = 0;
    int i_row = 0, i_col = 0, i_floor =0;

    Howmany_POINT(&row, &col, &floor);
    
    PARKING*** Parking_lot = NULL;

    Parking_lot = (CAR***)malloc(sizeof(CAR***) * floor);
    for (i_floor=0;i_floor<floor;i_floor++) {
        Parking_lot[i_floor] = (CAR**)malloc(sizeof(CAR**) * row);
        for (i_row = 0; i_row < row; i_row++) {
            Parking_lot[i_floor][i_row] = (CAR*)malloc(sizeof(CAR*) * col);
        }
    }
    
}

void display() {
    printf("주차 관리 프로그램 \n");
}

void main() {
    display();
    run();
}
