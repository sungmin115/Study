#pragma once
#include<iostream>
#include<cstdlib>
#include<ctime>

using std::cin; using std::cout; using std::endl;

class Solution {
private:
	int i = 0;
	int j = 0;
	int count = 0;
	int number = 0;
public:
	void Run();
	void Make_number(int arr[]);
	void Set_up_down();
	void Up_Bubble_sort(int arr[]);
	void Down_Bubble_sort(int arr[]);
	void showData(int arr[]);
};

