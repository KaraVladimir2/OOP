#pragma once
#include <iostream>

using namespace std;

class B1 {
	int b1;
public:
	B1(int x) { b1 = x; };
	void show_B1() { cout << "B1= " << b1 << "\n"; }
};
class B2 {
	int b2;
public:
	B2(int x) { b2 = x; }
	void show_B2() { cout << "B2= " << b2 << "\n"; }
};
class D1 : public B1, public B2 {
	int d1;
public:
	D1(int x1, int x2, int x3) : B1(x1), B2(x2) { d1 = x3; };
	void show_D1() { cout << "D1= " << d1 << "\n"; }
};
class D2 {
	int d2;
public:
	D2(int x) { d2 = x; }
	void show_D2() { cout << "D2= " << d2 << "\n"; }
};
class D3 : public D1, public D2 {
	int d3;
public:
	D3(int x1, int x2, int x3, int x4, int x5) : D1(x1,x2,x3), D2(x4) { d3 = x5; };
	void show_D3() { cout << "D3= " << d3 << "\n"; }
};
class D4 :public D3 {
	int d4;
public:
	D4(int x1, int x2, int x3, int x4, int x5, int x6) : D3(x1,x2,x3,x4,x5) { d4 = x6; };
	void show_D4() { cout << "D4= " << d4 << "\n"; }
};