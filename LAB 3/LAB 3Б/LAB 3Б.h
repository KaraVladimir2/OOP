#pragma once
#include <iostream>
#include <Windows.h>
using namespace std;

class Book {
	string name;
	string author;
	int pages;
public:
	Book() {};
	Book(string n, string a, int p) { name = n; author = a; pages = p; };
	void show_Book() { cout << "Название книги: " << name << endl << "Автор: " << author << endl
			<< "Количество страниц: " << pages << endl; }
	string get_name() {
		return name;
	}
};
class Library :public Book {
	int number;
	bool mark;
public:
	bool get_mark() { return mark; }
	void set_mark(bool b) { mark = b; }
	Library(string x1, string x2, int x3, int n, bool m) : Book(x1, x2, x3) { number = n, mark = m; };
	void show_Library() {
		show_Book();
		cout << "Номер каталога: " << number << endl << "Метка о наличии: " << mark << endl << endl;
	}
	bool Existence(string s) {
		if (get_name() == s) return true;
		else return false;
	}
	bool ExistenceInLibrary(string s) {
		if (get_name() == s) return true;
		else return false;
	}
};