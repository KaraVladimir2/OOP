#pragma once
#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;
class train
{
private:
	string destination;
	int number;
	string time;
public:
	void set_arr(train arr[5]);
	void show(train arr[5]);
	void sort_by_number(train arr[5]);
	void sort_by_destination(train arr[5]);
	void find(train arr[5]);
};