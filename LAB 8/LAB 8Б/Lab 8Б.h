#pragma once
#include <iostream>
using namespace std;

template <typename T>
class Mas {
	T size;
	T* arr;
	T ind;
public:
	Mas() {size = 100; arr = new T[size]; ind = 20; }
	void set(int i, T a);
	T get_ind() { return ind; };
	T get_arr() { return arr; };
	T sum();
	double ari();
	T& operator[] (const int ind);
	friend  ostream& operator << <T>(ostream&, const Mas&);
	~Mas() {
		delete[] arr;
	}
};