#include"210907.h"
int fn_run(int num) {
	num++;
}

int fn_run_two(int num){
	if (num == 1) {
		num--;
	}
}

int main(int argc, char** argv) {
	
	int num=0;
	num=fn_run(num);
	num=fn_run_two(num);
	return 0;
}


