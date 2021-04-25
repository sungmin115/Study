#include<iostream>
using std::cin; using std::cout;
using std::endl;
class Solution {
private:
	int count;
	int num;
	int result;
	int fn_numberOfSteps(int num);
	void fn_show();
public:
	void fn_run();
};

/*
21.03.30
음이 아닌 정수가 주어지면 단계를 측정하여 
0까지 낮추고 이를 반환합니다.
현재 숫자가 짝수이면 2로 나누어야하고 
그렇지 않으면 1을 빼야합니다.
Input :
	num = 14
	Ouput : 6
	과정 :
	1) 14 / 2 = 7
	2) 7 - 1 = 6
	3) 6 / 2 = 3
	4) 3 - 1 = 2
	5) 2 / 2 = 1
	6) 1 - 1 = 0
*/