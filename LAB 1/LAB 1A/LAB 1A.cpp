#include "Header.h"


void Point::set_x(int x0) {
	x = x0;
}

void Point::set_y(int y0) {
	y = y0;
}

int Point::get_x() {
	return x;
}

int Point::get_y() {
	return y;
}

int Point::sum(Point& q) {
	return q.x + q.y;
}

int Point::multiply(Point& q) {
	return q.x * q.y;
}

void Point::show(Point& def) {
	cout << "x=" << def.get_x() << " y=" << def.get_y() << endl;
	cout << "Результат суммирования переменных x и y: "
		<< def.sum(def) << endl;
	cout << "Результат произведения переменных x и y: "
		<< def.multiply(def) << endl;
}

int main()
{
	setlocale(LC_ALL, "ru");
	Point ob;
	int k(0);
	ob.show(ob);
	while (true) {
		cout << "Выберите: 1) Изменить переменные, 2) Показать результаты преобразований: ";
		cin >> k;
		if (k == 1) {
				cout << "Введите значение х: ";
				cin >> k;
				ob.set_x(k);
				cout << "Введите значение y: ";
				cin >> k;
				ob.set_y(k);
		}
		else if (k == 2) ob.show(ob);
	}
}
