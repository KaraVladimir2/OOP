#pragma once
#include <iostream>
#define pi 3.14;
using namespace std;

class Figure {
	float a;
	float b;
	float c;
	float r;
public:
	Figure() :a(5), b(3), c(7), r(10) {};
	float tr(Figure& ob);
	float kr(Figure& ob);
	float pol(Figure& ob);
};