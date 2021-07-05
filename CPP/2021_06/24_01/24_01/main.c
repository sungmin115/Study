#include"24_01.h"

void main() {
	//Lion dragon;
	//memset(&dragon,NULL,sizeof(Lion));

	//Lion dragon;
	//Lion dragon[3];
	int count = 0, i=0;
	Lion *dragon; //사용자가 원하는 크기만큼 Lion 열어주기 초기화 포함
	printf("원하는 크기를 입력 하시오.");
	scanf("%d",&count);
	dragon = (Lion*)malloc(sizeof(Lion) * count);
	memset(dragon,0,sizeof(Lion));
	for (i=0;i<count;i++) {
		printf("%d", dragon[i].x_point);
	}
	
	
	//char dasf[40];
	//(*(dasf+5));
	

}