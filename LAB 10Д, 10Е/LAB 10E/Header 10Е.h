#pragma once
#include <iostream>
#include <Windows.h>
using namespace std;

class mas{
	int n, m;
	int** arr;
public:
	mas(int n_size, int m_size) { n = n_size; m = m_size; arr = new int* [n]; for (int i = 0; i < n; i++) { arr[i] = new int[m]; }; }
	void find_min(int x,int y);
	void gen();
	void show();
	void find_and_change();
	void podarr();
};