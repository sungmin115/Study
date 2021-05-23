#include"21_05_20.h"

Solution::Solution() {
	i = 0;
	j = 0;
	strike = 0;
	ball = 0;
	count = 0;
	arrAnswer= "000";
	for (i=0;i<3;i++) {
		arrAnswer.replace(i,1, std::to_string(rand() % 10));
	}
}

void Solution::run() {
	int* arrUser = new int[3];
	while (1) {
		inputNumber(arrUser);
		compareNumber(arrUser);
		showResult();
		if (strike ==3) {
			break;
		}
	}
	
}

void Solution::inputNumber(int arrUser[]) {
	std::cout << "0~10까지의 3개의 숫자를 입력 하시오." << std::endl;
	for (i = 0; i < 3; i++) {
		std::cout<<i+1<< "번째 숫자를 입력 하시오.";
		while (1) {
			std::cin >>arrUser[i];
			if (arrUser[i]>=0 && arrUser[i]<=9) {
				break;
			}
		}
	}
	count++;
}

void Solution::compareNumber(int arrUser[]) {
	strike = 0, ball = 0;
	int ch[3] = {0,};
	stoi(arrAnswer);
	for (i=0;i<3;i++) {
		ch[i] = arrAnswer.at(i) -48;
	}

	strike = 0, ball = 0;
	for (i=0;i<3;i++) {
		if (ch[i] == arrUser[i]) {
			strike++;
		}
	}
	for (i = 0;i<3;i++) {
		for (i=0;i<3;i++) {
			for (j=0;j<3;j++) {
				if (ch[i] == arrUser[j]) {
					ball++;
				}
			}
		}
	}
	ball = ball - strike;
}

void Solution::showResult() {
	std::cout << "정답 입력 횟수는 : " << count << std::endl;
	while (1) {
		if (strike > 0) {
			std::cout << strike << " STRIKE  ";
			if (strike == 3) {
				break;
			}
			strike = 0;
		}
		else if (ball > 0) {
			std::cout << ball << " BALL";
			ball = 0;
			break;
		}
		else {
			std::cout << "OUT";
			break;
		}
	}
	std::cout<<std::endl;
}

Solution::~Solution() {
	std::cout << "소멸되었습니다." << std::endl;
}