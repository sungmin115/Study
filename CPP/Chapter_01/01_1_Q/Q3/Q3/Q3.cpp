#include<iostream>

int main(void)
{
	int num1 = 0, num2 = 0, num3 = 0;
	int count_i = 0;

	std::cout << "출력하고 싶은 단수를 입력 하시오: " << std::endl;
	std::cin >> num1;

	std::cout << num1 << "단" << std::endl;
	for (count_i=1;count_i<10;count_i++)
	{
		num2 = num1 * count_i;
		std::cout << num1 <<"X"<<count_i<<"="<< num2<<std::endl;
	}
	return 0;
}