#include "LAB 3Б.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int k;
	string s;
	bool b;
	Library ob[3] = {
		{"Книга1", "Автор1", 300, 1, true},
		{"Книга2", "Автор2", 250, 2, false},
		{"Книга3", "Автор3", 100, 1, false}
	};
	for (int i = 0; i < 3; i++) ob[i].show_Library();
	while (true) {
		cout << "Выберите: 1) Проверить, есть ли книга вообще;" << endl << 
			"2) Есть ли книга в библиотеке;" << endl << "3) Смоделировать ситуацию." << endl;
		cin >> k;
		if (k == 1) {
			cout << "Введите название книги: ";
			cin >> s;
			for (int i = 0; i < 3; i++) {
				if (ob[i].Existence(s)) b = true;
				else b = false;
			}
			if (b) cout << "Такая книга есть!" << endl << endl;
			else cout << "Такой книги нет!" << endl << endl;
		}
		if (k == 2) {
			cout << "Введите название книги: ";
			cin >> s;
			for (int i = 0; i < 3; i++) {
				if (ob[i].Existence(s)) { b = true; k = i; }
				else b = false;
			}
			if (ob[k].get_mark()) cout << "Такая книга есть в библиотеке!" << endl << endl;
			else cout << "Такой книги в библиотеке нет!" << endl << endl;
		}
		if (k == 3) {
			ob[0].set_mark(false);
			cout << "Введите название книги: ";
			cin >> s;
			for (int i = 0; i < 3; i++) {
				if (ob[i].Existence(s)) { b = true; k = i; }
				else b = false;
			}
			if (ob[k].get_mark()) cout << "Такая книга есть в библиотеке!" << endl << endl;
			else cout << "Такой книги в библиотеке нет!" << endl << endl;
		}
	}
}
