#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class PEVM {
	string proc;
	int mgz;
	int ram;
	string type;
public:

	void set_proc(string p);
	void set_mgz(int m);
	void set_ram(int r);
	void set_type(string t);

	string get_proc() const;
	int get_mgz() const;
	int get_ram() const;
	string get_type() const;

	void shapka();

	PEVM operator = (const PEVM& ob);
	void operator [] (int i);
	PEVM operator () (string p, int m, int r, string t);

	friend PEVM operator + (const PEVM& ob1, const PEVM& ob2);
	friend int comp(PEVM& ob1, PEVM& ob2);
	friend ostream& operator << (ostream& out, const PEVM& ob);
	friend istream& operator >> (istream& in, PEVM& ob);
};