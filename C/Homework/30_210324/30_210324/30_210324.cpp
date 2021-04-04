#include"30_210324.h"

class Solution
{
private:
	int count;
public:
	void Initnums(int co);
	int* fn_running_sum(int* nums);
	void Show_nums(int* nums);
};

void Solution::Initnums(int co) {
	count = co;
}

int* Solution::fn_running_sum(int* nums) {
	int i = 0;
	for (i = 1;i<count;i++) {
		nums[i] = nums[i] + nums[i - 1];
	}
	return nums;
}

void Solution::Show_nums(int* nums) {
	int i = 0;
	for (i=0;i<count;i++) {
		cout << "nums: " << nums[i] << endl;
	}
}

int main(void) {
	int i = 0, count =0;
	int* nums = new int[count];
	Solution nums_S;

	cout << "입력하고 싶은 자리수를 입력 하시오." << endl;
	cin >> count;

	nums_S.Initnums(count);

	cout <<count<< "자리 수를 입력 하시오." << endl;
	for (i=0;i<count;i++) {
		cin >> nums[i];
	}
	nums_S.fn_running_sum(nums);
	nums_S.Show_nums(nums);

	delete []nums;
	return 0;
}