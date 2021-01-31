#include"Kbhit.h"

int main() {
    int key;

    Display_main();
    while (1) {
        if (kbhit()) {               // 1. 키보드 눌렸을 시 if문이 실행된다.
            key = getch();           // 2. 방향키가 입력됬을 때 224 00 이 버퍼에 있다. 
            if (key == 224 || key == 0) {   // 3. 방향키 입력시 처음에는 224가 반환 된다.
                key = getch();        // 4. 224이후에는 00이 반환되어 방향키의 아스키코드 값에 따라 나누어져서 움직인다.
                switch (key) {
                    case LEFT:
                         printf("좌로 이동\n");
                        break;
                    case RIGHT:
                          printf("우로 이동\n");
                        break;
                    case UP:
                         printf("위로 이동\n");
                        break;
                    case DOWN:
                         printf("아래로 이동\n");
                        break;
                }
            }
            else if(key == 'q'){
                    printf("종료");
                  break;
            }
        }
    }
    return 0;
}

void Display_main() {
    printf("방향키를 입력 하시오. \n");
    printf("'q'를 입력 하면 종료 \n");
}