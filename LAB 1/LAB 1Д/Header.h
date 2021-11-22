#pragma once
#include <iostream>
using namespace std;

class Num {
	int *arr;
public:
	Num(){
		arr = new int[10];
		arr[0] = rand() % (20 - (-20) + 1) + (-20);
		int k;
		for (int i = 1; i < 10;)
		{
			k = rand() % (20 - (-20) + 1) + (-20);
			if (k != arr[i - 1]) { arr[i] = k; i++; };
		}
	}
	Num(int size, int min, int max) {
		arr = new int[size];
		arr[0] = rand() % (20 - (-20) + 1) + (-20);
		int k;
		for (int i = 1; i < size;)
		{
			k = rand() % (20 - (-20) + 1) + (-20);
			if (k != arr[i - 1]) { arr[i] = k; i++; };
		}
	}
	Num(const Num& n) {
		arr = n.arr;
	}

	int max() {
		int max = arr[0];
		for (int i = 1; i < _msize(arr) / sizeof(int); i++)
		{
			if (max < arr[i]) max = arr[i];
		}
		return max;
	}

	void print() {
		for (int i = 0; i < _msize(arr) / sizeof(int); i++)
		{
			cout << arr[i]<<" ";
		}
		cout << std::endl;
	}

	void combine( Num x) {

		for (int i = 0; i < _msize(arr) / sizeof(int); i++)
		{
			cout << arr[i] + x.arr[i] <<" ";
		}
	}

	void intersection(Num x) {
		int k(0), sw(0);
		int* m = new int[_msize(arr) / sizeof(int)];

		for (int i = 0; i < _msize(arr) / sizeof(int); i++)
		{
			for (int j = 0; j < _msize(x.arr) / sizeof(int); j++)
			{
				if (arr[i] == x.arr[j]) {
					for (int q = 0; q < k; q++)
					{
						if (m[q] == arr[i]) { sw = 1; break; }
						
					}
					if (sw == 1) { sw = 0; break; }
					m[k] = arr[i]; k++; break;
				}
							
			}
		}
		for (int i = 0; i < k; i++)
		{
			cout << m[i] << " ";
		}
	}

	void difference(Num x) {

		for (int i = 0; i < _msize(arr) / sizeof(int); i++)
		{
			cout << arr[i] - x.arr[i] << " ";
		}
	}

	void diz_sum(Num x) {
		int k(0), sw(0);
		int* m = new int[_msize(arr) / sizeof(int)];
		for (int i = 0; i < _msize(arr) / sizeof(int); i++) {
			for (int j = 0; j < _msize(x.arr) / sizeof(int); j++) {
				if (arr[i] == x.arr[j]) break;
				if (j == (_msize(x.arr) / sizeof(int)) - 1) {
					for (int q = 0; q < k; q++)
					{
						if (m[q] == arr[i]) { sw = 1; break; }

					}
					if (sw == 1) { sw = 0; break; }
					m[k] = arr[i]; k++; break;
				}
			}
		}

		for (int i = 0; i < _msize(x.arr) / sizeof(int); i++) {
			for (int j = 0; j < _msize(arr) / sizeof(int); j++) {
				if (x.arr[i] == arr[j]) break;
				if (j == (_msize(arr) / sizeof(int)) - 1) {
					for (int q = 0; q < k; q++)
					{
						if (m[q] == x.arr[i]) { sw = 1; break; }

					}
					if (sw == 1) { sw = 0; break; }
					m[k] = x.arr[i]; k++; break;
				}
			}
		}
		for (int i = 0; i < k; i++)
		{
			cout << m[i] << " ";
		}
	}
};