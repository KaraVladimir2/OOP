#pragma once
#include <iostream>

using namespace std;

class Sobaka {
	int weight;
	int age;
public:
	Sobaka() { weight = 1; age = 1; cout << "Конструктор Sobaka" << endl;
	};
	Sobaka(int x1, int x2) { weight = x1; age = x2; cout << "Конструктор Sobaka" << endl; };
	void show_Sobaka() { cout << "weight= " << weight << endl << "age= " << age << endl; }
	void golos() {
		if (weight >= 10) cout << "GAV" << endl;
		else cout << "gav" << endl;
	}
	~Sobaka() {
		cout << "Деструктор Sobaka" << endl;
	}

};
class Spaniel : public Sobaka {
	string color;
public:
	Spaniel(string c) { color = c; cout << "Конструктор Spaniel"<<endl; };
	void show_Spaniel() { cout << "color= " << color << endl; }
	~Spaniel() {
		cout << "Деструктор Spaniel" << endl;
	}
};