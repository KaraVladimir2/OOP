#pragma once
#pragma once
#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Person {
	string name;
	int age;
public:
	Person() :name(""), age(0) {}
	Person(string n, int a) { name = n; age = a; }
	Person(string n) { name = n; }
	Person(int a) { age = a; }
	string get_name() { return name; }
	int get_age() { return age; }
	void set_name(string n) { name = n; }
	void set_age(int a) { age = a; }
	friend bool operator < (const Person& d1, const Person& d2) {
		return d1.name < d2.name;
	}
	bool operator()(const Person& d1, const Person& d2) const {
		return d1.age < d2.age;
	}
	friend ostream& operator<<(ostream& s, const Person& ob) {
		return s << ob.name << " " << ob.age;
	}

};

class STAFF {
public:
	int count = 0;
	map<Person, int> m1;
	map<Person, int, Person> m2;
	void insert();
	void print_all();
	void print_name();
	void print_age();
	void del_name();
	void in();
	void find_name();
	void find_age();

};