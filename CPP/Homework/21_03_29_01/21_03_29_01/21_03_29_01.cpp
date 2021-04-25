#include"21_03_29_01.h"

void cl_solution::fn_run() {
	cout << "문자, 숫자, 특수문자 중 한가지를 입력 하시오" << endl;
	cin >> ch;
	fn_show();
}

void cl_solution::fn_show() {
	int i(ch);
	cout << i << endl;
}

int main(void) {
	cl_solution* asc = new cl_solution();

	asc->fn_run();

	return EXIT_SUCCESS;
}