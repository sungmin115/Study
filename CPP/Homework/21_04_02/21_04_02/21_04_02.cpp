#include"21_04_02.h"

void cl_solution::cl_run() {
	input_nums();
	sumOddLengthSubarrays(this->nums);
	cl_show();
}


void cl_solution::input_nums() {
	int i = 0;
	this->length = 0;
	cout << "배열에 들어갈 숫자를 입력 하시오." << endl;
	length = sizeof(nums) / sizeof(int);
	for (i=0;i<length;i++) {
		cin>> this->nums[i];
	}
}

int cl_solution::sumOddLengthSubarrays(int* arr) {
	int i = 0, j=0, count =1, number =0;
	this->result = 0;
	
	while (length !=0) {
		if(length % 2 != 0) {
			for (j = 0;j<count; j++) {
				number = j;
				for (i = 0; i < length; i++) {
					result = result + arr[number];
					number++;
				}
			}
			count++;
			length--;
		}
		else {
			count++;
			length--;
		}
	}



	return result;
}
void cl_solution::cl_show() {
	cout << result << endl;
}

int main(void) {
	cl_solution* cl_arr = new cl_solution();

	cl_arr->cl_run();

	return EXIT_SUCCESS;
}