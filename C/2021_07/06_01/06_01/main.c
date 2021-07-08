#include"06_01.h"

void main() {
	int num = 0, count=0, i=0, j=1, len=0, pnum_i=0;
	int arr[100] = {0, };// *(arr+0) ,*(arr+1) , *(arr+2) .....
	int* pnum;   //int*는 배열처럼 사용 할 수 있다.
	int* temp;
	temp = (int*)malloc(sizeof(int));
	while (1){
		printf("%d번쨰 숫자를 입력 하시오. \n", j);
		scanf("%d", &num);
		if (num==-1) {
			break;
		}else {
			pnum = (int*)malloc(sizeof(int)*j);
			for (pnum_i=0;pnum_i<i;pnum_i++) {
				pnum[pnum_i] = temp[pnum_i];
			}
			free(temp);
			temp = (int*)malloc(sizeof(int)*j);
			//*(pnum+i) = num;
			//@ 크기
			//pnum = (int*)malloc(sizeof(int)*2);
			pnum[i] = num; // *(punm+0)
			for (pnum_i = 0; pnum_i < j;pnum_i++) {
				temp[pnum_i] = pnum[pnum_i];
			}
			free(pnum);
			//pnum[1] = num + 1; arr[i] = num;
			//printf("%d pnum : %d \n", pnum[0],pnum[1]);
			i++;
			j++;
			count++;
		}
	}
	for (i=0;i<count;i++) {
		printf("%d pnum : %d \n",i+1, *(temp+i));
	}
}