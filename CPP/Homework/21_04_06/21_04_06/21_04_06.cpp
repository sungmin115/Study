#include"21_04_06.h"

void Solution::Run() {
	int* arr = new int[5000];
	Make_number(arr);
	Set_up_down();
	clock_t startTime = clock();
	count = 4999;
	if (number == 1) {
		while (count != 0) {
			for (i=0;i< count;i++) {
				Up_Bubble_sort(arr);
			}
			count--;
		}
	}
	else {
		while (count != 0) {
			for (i = 0;i<count;i++) {
				Down_Bubble_sort(arr);
			}
			count--;
		}
	}
	clock_t endTime = clock();
	clock_t elapsed = endTime - startTime;
	double timeInSecond = (double)(elapsed / CLOCKS_PER_SEC);
	showData(arr);
	cout << "Time: " << timeInSecond << "초(" << elapsed << "ms)" << "\n";
}

void Solution::Make_number(int arr[]) {
	for (i=0;i<5000;i++) {
		arr[i] = rand()%10000;
	}
}
void Solution::Set_up_down() {
	cout << "(1) 오름차순 (2) 내림차순 번호를 입력 하시오." << endl;
	while (1) {
		cin >> number;
		if (number == 1) {
			break;
		}
		else if (number == 2) {
			break;
		}
		else {
			cout << "숫자를 다시 입력 하시오." << endl;
		}
	}
}
void Solution::Up_Bubble_sort(int arr[]) {
	int temp = 0;
	if (arr[i] > arr[i + 1]) {
		temp = arr[i];
		arr[i] = arr[i + 1];
		arr[i + 1] = temp;
	}
}

void Solution::Down_Bubble_sort(int arr[]) {
	int temp = 0;
	if (arr[i] < arr[i + 1]) {
		temp = arr[i];
		arr[i] = arr[i + 1];
		arr[i + 1] = temp;
	}
}

void Solution::showData(int arr[]) {
	for (i=0;i<5000;i++) {
		cout << arr[i]<<" ";
	}
}