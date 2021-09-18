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

void Point::show(Point& def, Point& param, Point& copy) {
	cout << "По умолчанию: x=" << def.get_x() << " y=" << def.get_y() << endl;
	cout << "С параметром: x=" << param.get_x() << " y=" << param.get_y() << endl;
	cout << "Копирование: x=" << copy.get_x() << " y=" << copy.get_y() << endl;
	cout << "Результат суммирования переменных x и y объекта ob_default: "
		<< def.sum(def) << endl;
	cout << "Результат суммирования переменных x и y объекта ob_param: "
		<< param.sum(param) << endl;
	cout << "Результат суммирования переменных x и y объекта ob_copy: "
		<< copy.sum(copy) << endl;
	cout << "Результат произведения переменных x и y объекта ob_default: "
		<< def.multiply(def) << endl;
	cout << "Результат произведения переменных x и y объекта ob_param: "
		<< param.multiply(param) << endl;
	cout << "Результат произведения переменных x и y объекта ob_copy: "
		<< copy.multiply(copy) << endl;
}

void Point::show_def(Point& def) {
	cout << "По умолчанию: x=" << def.get_x() << " y=" << def.get_y() << endl;
	cout << "Результат суммирования переменных x и y объекта ob_default: "
		<< def.sum(def) << endl;
	cout << "Результат произведения переменных x и y объекта ob_default: "
		<< def.multiply(def) << endl;
}

void Point::show_param(Point& param) {
	cout << "С параметром: x=" << param.get_x() << " y=" << param.get_y() << endl;
	cout << "Результат суммирования переменных x и y объекта ob_param: "
		<< param.sum(param) << endl;
	cout << "Результат произведения переменных x и y объекта ob_param: "
		<< param.multiply(param) << endl;
}

void Point::show_copy(Point& copy) {
	cout << "Копирование: x=" << copy.get_x() << " y=" << copy.get_y() << endl;
	cout << "Результат суммирования переменных x и y объекта ob_copy: "
		<< copy.sum(copy) << endl;
	cout << "Результат произведения переменных x и y объекта ob_copy: "
		<< copy.multiply(copy) << endl;
}

int main()
{
	setlocale(LC_ALL, "ru");
	Point ob_default;
	Point ob_param(10,20);
	Point ob_copy(ob_param);
	int k(0);
	ob_default.show(ob_default, ob_param, ob_copy);
	while (true) {
		cout << "Выберите: 1) Изменить переменные, 2) Показать результаты преобразований: ";
		cin >> k;
		if (k == 1) {
			cout << 
				"Переменные какого объекта вы хотите изменить?: 1) ob.default, 2) ob_param, 3) ob.copy: ";
			cin >> k;
			if (k == 1) {
				cout << "Введите значение х: ";
				cin >> k;
				ob_default.set_x(k);
				cout << "Введите значение y: ";
				cin >> k;
				ob_default.set_y(k);
			}
			else if (k == 2) {
				cout << "Введите значение х: ";
				cin >> k;
				ob_param.set_x(k);
				cout << "Введите значение y: ";
				cin >> k;
				ob_param.set_y(k);
			}
			else if (k == 3) {
				cout << "Введите значение х: ";
				cin >> k;
				ob_copy.set_x(k);
				cout << "Введите значение y: ";
				cin >> k;
				ob_copy.set_y(k);
			}
		}
		else if (k == 2) {
			cout << "Результаты преобразований какого объекта вы хотите увидеть?: " << endl <<
				"1) ob_default, 2) ob_param, 3) ob_copy: ";
			cin >> k;
			if (k == 1) {
				ob_default.show_def(ob_default);
			}
			else if (k == 2) {
				ob_param.show_param(ob_param);
			}
			else if (k == 3) {
				ob_copy.show_copy(ob_copy);
			}
		}
	}
}
