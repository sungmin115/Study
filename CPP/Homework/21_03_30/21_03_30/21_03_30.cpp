#include"21_03_30.h"

void Solution::fn_run() {
	cin >> num;
	result = fn_numberOfSteps(num);
	fn_show();
}

int Solution::fn_numberOfSteps(int num) {
	count = 0;
	while (num != 0) {
		if (num % 2 == 0) {
			num = num / 2;
			count++;
		}
		else if (num != 0) {
			num = num - 1;
			count++;
		}
	}
	return count;
}

void Solution::fn_show() {
	cout << result << endl;
}

int main(void) {
	Solution *number_run = new Solution;
	number_run->fn_run();
	return EXIT_SUCCESS;
}