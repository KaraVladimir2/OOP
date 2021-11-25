#pragma once
#include <iostream>
#include <vector>
#include <map>
using namespace std;

class NAME {
	string name;
public:
	NAME(): name("") {}
	NAME(string n) { name = n; }
	string get() { return name; }
	void set(string s) { name = s; }
	friend ostream& operator<< (ostream& out, const NAME& point);
	friend bool operator < (const NAME& d1, const NAME& d2) {
		return d1.name < d2.name;
	}
	NAME& operator = (NAME c2)
	{
		name = c2.name;
		return *this;
	}

};

class NUMBER {
	string num;
public:
	NUMBER(): num("") {}
	NUMBER(string n) { num = n; }
	string get() { return num; }
	void set(string s) { num = s; }
	friend ostream& operator<< (ostream& out, const NUMBER& point);
	NUMBER& operator = (NUMBER c2)
	{
		num = c2.num;
		return *this;
	}
};