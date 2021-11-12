#pragma once
#include <iostream>
using namespace std;

class Persona {
protected:
	string fio;
	int age;
public:
	Persona(){}
	Persona(string f, int a) : fio(f), age(a){}
	virtual void print() = 0;
	virtual int who() = 0;
	virtual int ask() = 0;
};

class Prepod : public Persona {
	string discipline;
	int degree;
public:
	Prepod(){}
	Prepod(string f, int a, string d, int deg) : Persona(f,a), discipline(d), degree(deg) {}
	virtual int who() override { return 1; }
	virtual int ask() override { return degree; }
	int get_age() { return age; }
	virtual void print() override { cout << fio << "|" << age << "|" << discipline << "|" << degree << endl; }
};

class Student : public Persona {
	int marks[5];
public:
	Student(){}
	Student(string f, int a, int m[5]) : Persona(f, a) { for (int i = 0; i < 5; i++) marks[i] = m[i]; }
	virtual int who() override { return 3; }
	virtual int ask() override {
		int k(0);
		for (int i = 0; i < 5; i++) if (marks[i] <3 ) k++;
		return  k;
	}
	virtual void print() override { cout << fio << "|" << age << "|" << ask() << endl; }
};

class Zav_kaf : public Prepod {
	string  post;
public:
	Zav_kaf(){}
	Zav_kaf(string f, int a, string d, int deg, string p) : Prepod(f,a,d,deg), post(p) {}
	virtual int who() override { return 1; }
	virtual int ask() override { return age; }
	virtual void print() override { cout << fio << "|" << age << "|" << post << endl; }
};

class VUZ {
public:
	Prepod* p = new Prepod[2];
	Student* s = new Student[3];
	Zav_kaf z;
	VUZ() {}
};