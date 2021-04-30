#include<iostream>
using std::cin; using std::cout;
using std::endl;


class cl_solution{
private:
    int nums[5];
    int result;
    int length;
    int count;
    int number;
    int sumOddLengthSubarrays(int* arr);
public:
    void cl_run();
    void input_nums();
    void cl_show();
};
/*
Day : 21.04.02
@ Quest :
배열의 홀수 번째 숫자 더하여 반환 하기
@ Input :
arr = [1,4,2,5,3]
@ Output :
58
@ Explanation :
[1] = 1
[4] = 4
[2] = 2
[5] = 5
[3] = 3
[1,4,2] = 7
[4,2,5] = 11
[2,5,3] = 10
[1,4,2,5,3] = 15
총 합 : 1 + 4 + 2 + 5 + 3 + 7 + 11 + 10 + 15 = 58
*/