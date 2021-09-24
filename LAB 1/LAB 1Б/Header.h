#pragma once
#include <iostream>
#define pi 3.14;
using namespace std;

class Figure {
	float r;
	float a;
	float b;
	float c;
public:
	Figure(float r1 = 10, float a1 = 0, float b1 = 0, float c1 = 0): r(r1), a(a1), b(b1), c(c1) {};
	float tr(Figure& ob);
	float kr(Figure& ob);
	float pol(Figure& ob);
};