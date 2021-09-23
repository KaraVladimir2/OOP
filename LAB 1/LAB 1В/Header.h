#pragma once
#include <iostream>
using namespace std;

class Complex {
	float r, m;
public:
	Complex():r(1.121), m(5.34) {};
	void init(float x, float y);
	void add(Complex& c, int r1, int m1);
	void print(Complex& c);
	Complex add_complex(Complex& a, Complex& b);
};