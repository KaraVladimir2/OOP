#pragma once
#include <iostream>

using namespace std;

class Sobaka {
	int weight;
	int age;
public:
	Sobaka() { weight = 1; age = 1; cout << "����������� Sobaka" << endl;
	};
	Sobaka(int x1, int x2) { weight = x1; age = x2; cout << "����������� Sobaka" << endl; };
	void show_Sobaka() { cout << "weight= " << weight << endl << "age= " << age << endl; }
	void golos() {
		if (weight >= 10) cout << "GAV" << endl;
		else cout << "gav" << endl;
	}
	~Sobaka() {
		cout << "���������� Sobaka" << endl;
	}

};
class Spaniel : public Sobaka {
	string color;
public:
	Spaniel(string c) { color = c; cout << "����������� Spaniel"<<endl; };
	void show_Spaniel() { cout << "color= " << color << endl; }
	~Spaniel() {
		cout << "���������� Spaniel" << endl;
	}
};