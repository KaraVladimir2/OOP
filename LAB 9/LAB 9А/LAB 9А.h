#pragma once
#include <iostream>
#include <vector>
using namespace std;

class SUM {
	int a;
	int b;
	int sum;
public:
	SUM() :a(1), b(3), sum(a + b) {};
	SUM(int a1, int b1) { a = a1; b = b1; sum = a1 + b1; }
	int get_sum() { return sum; }
	friend bool operator == (const SUM& c1, const SUM& c2);
};