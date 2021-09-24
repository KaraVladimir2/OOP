#pragma once
#include <iostream>
using namespace std;

class Point {
	int x;
	int y;
public:
	Point() :x(1), y(2) {};
	Point(int x0, int y0) : x(x0), y(y0) {};
	Point(const Point& ob) :x(ob.x), y(ob.y) {};
	void set_x(int x0);
	void set_y(int y0);
	int get_x();
	int get_y();
	int sum(Point& q);
	int multiply(Point& q);
	void show(Point& def);
};