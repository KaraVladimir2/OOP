#include "Header.h"

void set(Store& a, string n, int num, double pt, double ps) {
	a.name = n;
	a.number = num;
	a.ptz = pt;
	a.psp = ps;
}

void change(Store& a, string& n, int &num, double &pt, double &ps) {
    a.name = n;
    a.number = num;
    a.ptz = pt;
    a.psp = ps;
}

void sort()
{
	int i, j;
	Store temp;
	for (i = 0; i < 5; i++)
		for (j = i + 1; j < 5; j++)
			if (obj[i].name > obj[j].name) {
				temp = obj[i];
				obj[i] = obj[j];
				obj[j] = temp;
			}
}

void show()
{
	cout << "                       Магазины: \n";
	cout << "|-------------------------------------------------|\n";
	cout << "|Название    |Номер       |ПТЗ        |ПСП        |\n";
	cout << "|------------|------------|-----------|-----------|\n";

	for (int i = 0; i < 5; i++) 
		cout<<"|" << setw(12) << obj[i].name<<"|" << setw(12) << obj[i].number
        << "|" << setw(11) << obj[i].ptz<<"|" << setw(11) << obj[i].psp<<"|" << endl;
	}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string c1;
    int c2;
    double c3;
    double c4;
    set(obj[0], "Пятерочка", 0, 121.4, 153.5);
    set(obj[1], "АТБ", 1, 123.4, 135.3);
    set(obj[2], "Ашан", 2, 255.3, 308.3);
    set(obj[3], "Метро", 3, 206.1, 224.8);
    set(obj[4], "Ева", 4, 129.9, 150.5);
    for (int a = 0; !a;) {
        cout << "1. Изменить запись\n";
        cout << "2. Сортировать базу\n";
        cout << "3. Вывести базу\n";
        cout << "4. Выход\n";
        cout << "> ";
        int p;
        cin >> p;
        switch (p) {
        case 1: {
            cout << "Введите название магазина, который хотите изменить> ";
            cin >> c1;
            for (int i = 0; i < 5; i++)
            {
                if (obj[i].name == c1) p = i;
            }
            cout << "Введите данные(название, номер, площадь торговых залов, площадь складских помещений)> ";
            cin >> c1 >> c2 >> c3 >> c4;
            change(obj[p], c1, c2, c3, c4);
            
            break;
        }

        case 2: {
            sort();
            break;
        }

        case 3: {
            show();
            break;
        }

        case 4: {
            a = 1;
            break;
        }

        default: {
            cout << "Неверный вызов";
            _getch();
            break;
        }
        }
    }
}
