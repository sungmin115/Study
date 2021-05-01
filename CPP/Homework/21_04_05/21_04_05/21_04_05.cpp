#include"21_04_05.h"

void Solution::Run() {
	Set_count();
	int* arr = new int[length];
	Input(arr);
	count = length -1;
	while (count !=0) {
		for (i = 0; i < count; i++) {
			Bubble_sort(arr);
		}
		Show_nums(arr);
		count--;
	}
	delete [] arr;
}

void Solution::Set_count() {
	cout << "배열의 크기를 입력 하시오." << endl;
	cin >> length;
}
void Solution::Input(int arr[]) {
	cout << "안에 들어갈 숫자를 입력 하시오." << endl;
	for (i=0;j<length;j++) {
		cin>>arr[j];
	}
	cout<<endl;
}

void Solution::Bubble_sort(int arr[]) {
	int temp =0;
	if (arr[i]>arr[i+1]) {
		temp = arr[i];
		arr[i] = arr[i + 1];
		arr[i + 1] = temp;
	}
}

void Solution::Show_nums(int arr[]) {
	for (j=0;j<length;j++) {
		cout<<arr[j]<<" ";
	}
	cout << endl;
}

int main(void) {
	Solution solution;
	solution.Run();

	return EXIT_SUCCESS;
}
