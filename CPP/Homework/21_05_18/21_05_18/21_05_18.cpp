#include"21_05_18.h"

void Solution::run() {
	int* arrUser = new int[3];
	while (1) {
		inputNumber(arrUser);
		checkNumber(arrUser);
		showResult();
		if (strike == 3) {
			break;
		}
	}
}

void Solution::inputNumber(int arrUser[]) {
	for (i=0;i<3;i++) {
		std::cout << i+1<<"자리에 입력하고 싶은 숫자를 입력 하시오." << std::endl;
		std::cin>>arrUser[i];
	}
}

void Solution::checkNumber(int arrUser[]) {
	strike = 0, ball = 0;
	for (i=0;i<3;i++) {
		if (arrAnswer[i] == arrUser[i]) {
			strike++;
		}
	}
	for (i=0;i<3;i++) {
		for (j = 0;j<3;j++) {
			if (arrAnswer[i] == arrUser[j]) {
				ball++;
			}
		}
	}
	ball = ball - strike;
}
void Solution::showResult() {
	if (strike > 0) {
		std::cout << strike << " STRIKE" << "\t";
	}
	if (ball>0) {
		std::cout << ball << " ball";
	}
	if (strike == 0 && ball ==0) {
		std::cout << "OUT";
	}
	std::cout << std::endl;
}