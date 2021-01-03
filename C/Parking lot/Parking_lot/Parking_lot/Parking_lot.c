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
    //CAR** car;    //or CAR[][] car
    CAR* car;    //or CAR[][] car
}PARKING;


void Howmany_POINT(int* row, int* col, int* floor) {
    int user_row = 0, user_col = 0, user_floor = 0;
    printf("주차장 가로의 길이를 입력 하세요 : ");
    scanf_s("%d", &user_row);
    *row = user_row;
    
    printf("주차장 세로의 길이를 입력 하세요 : ");
    scanf_s("%d", &user_col);
    *col = user_col;

    printf("주차장 층수를 입력 하세요 : ");
    scanf_s("%d", &user_floor);
    *floor = user_floor;
}

void Parking_POINT(int* row_number, int* col_number, int* floor_number) {
    int user_row_number = 0, user_col_number = 0, user_floor_number = 0;

    printf("주차할 층수를 입력 하세요 : ");
    scanf_s("%d", &user_floor_number);
    *floor_number = user_floor_number;

    printf("주차할 가로의 번호를 입력 하세요 : ");
    scanf_s("%d", &user_row_number);
    *row_number = user_row_number;

    printf("주차장 세로의 번호를 입력 하세요 : ");
    scanf_s("%d", &user_col_number);
    *col_number = user_col_number;
        
}

void run() {
    int row = 0, col = 0, floor = 0;
    int i_row = 0, i_col = 0, i_floor =0;
    int row_number = 0, col_number = 0, floor_number = 0;

    Howmany_POINT(&row, &col, &floor);
    
    PARKING*** Parking_lot;

    Parking_lot = malloc(sizeof(CAR**) * floor);
    for (i_floor=0;i_floor<floor;i_floor++) {
        Parking_lot[i_floor] = malloc(sizeof(CAR*) * col);
        for (i_col = 0; i_col < col; i_col++) {
            Parking_lot[i_floor][i_col] = malloc(sizeof(CAR) * row);
        }
    }

    for (i_floor=0;i_floor<floor;i_floor++) {
        for (i_col = 0; i_col < col; i_col++) {
            for (i_row=0;i_row<row;i_row++) {
                memset(&Parking_lot[i_floor][i_col][i_row], 0, sizeof(CAR));

            }
        }
    }

    //Parking_POINT(&row_number,&col_number,&floor_number);

    
    for (i_floor = 0; i_floor < floor; i_floor++) {
        printf("%d 층 \n", i_floor+1);
        for (i_col = 0; i_col < col; i_col++) {
            for (i_row=0; i_row<row; i_row++) {
                printf("%d", (Parking_lot[i_floor][i_col][i_row].car));
            }
            printf("\n");
        }
        printf("\n");
    }
    

}

void display() {
    printf("주차 관리 프로그램 \n");
}

void main() {
    display();
    run();
}
