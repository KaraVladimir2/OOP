#pragma once
#include <iostream>
#include <fstream>
#include <windows.h>
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
};

class R {
public:
	void set(PEVM& ob, string p, int m, int r, string t);
	void show(PEVM ob);
	void writeToFile(string filename, PEVM data);
	void readFromFile(string filename, PEVM& data, int n);
	void save(string filename, PEVM* data);
	void restore(string filename, PEVM* data);
};