#pragma once
#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;
class train
{
	string destination;
	int number;
	string time;
public:
	void input_arr(train arr[5]);
	void set_arr_hard(train arr[5]);
	void show(train arr[5]);
	void sort_by_number(train arr[5]);
	void sort_by_destination(train arr[5]);
	void find(train arr[5]);
};