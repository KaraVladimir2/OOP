#pragma once
#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

class DOG {
	string name;
	int weight;
	int age;
public:
	DOG();
	DOG(const string n, const int w, const int a);
	void set_dog_name(const string& n);
	void set_dog_weight(const int& w);
	void set_dog_age(const int& a);
	string get_dog_name()const;
	int get_dog_weight()const;
	int get_dog_age()const;
};

class MASTER {
	static int count;
	const int id = 123;
	string name;
	DOG* dogs = new DOG[5];
	
public:
	MASTER();
	MASTER(const string n, const int k);
	void show() const;
	int show_count()const;
	void set_name_master(const string & n);
	void set_name_dog(const string& n, const int& k);
	void set_weight(const int& w, const int& k);
	void set_age(const int& a, const int& k);
};