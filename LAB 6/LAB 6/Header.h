#pragma once
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <Windows.h>
using namespace std;

class Store {
public:
	string name;
	int number;
	double ptz;
    double psp;
	Store(){}
	friend void set(Store& a, string n, int num, double pt, double ps);
	friend void change(Store& a, string &n, int &num,double &pt, double& ps);
	void show();
	friend void sort();
};
Store obj[5];