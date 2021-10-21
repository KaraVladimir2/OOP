#pragma once
#include <iostream>
#include <Windows.h>
using namespace std;

class Base {
	int x;
public:
	Base() {  x = rand() % 100; }
	int get_Base() { return x; }
	void show_Base() { cout << x << "  "; }
};
class B1 :public Base {
	int b1;
public:
	B1() {b1 = get_Base() % 7; }
	int get_B1() { return b1; }
};
class B2 :public B1 {
	int b2;
public:
	B2() {b2 = get_Base() % 5; }
	int get_B2() { return b2; }

};