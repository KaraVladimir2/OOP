#pragma once
#include <iostream>
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
	void show();
};