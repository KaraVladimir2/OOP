#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class Print {
public:
	string s;
	Print(string s1) { s = s1; }
	void show();
	friend ostream& operator<<(ostream&, Print&);
	bool isParam(const char* c);
};