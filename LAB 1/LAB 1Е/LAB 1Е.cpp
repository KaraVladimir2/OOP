#include "Header.h"

int main()
{
	setlocale(LC_ALL, "ru");
    Time t1, t2;
	int x1, x2, x3;
	try
	{
		cout << "Введите часы, минуты и секунды первого объекта через пробел: ";
		cin >> x1 >> x2 >> x3;
		if (x1 < 0 || x1>23 || x2 < 0 || x2>59 || x3 < 0 || x3>59) throw "Недопустимое значение!";
		t1.set_h(x1); t1.set_m(x2); t1.set_s(x3);
		cout << "Введите часы, минуты и секунды второго объекта через пробел: ";
		cin >> x1 >> x2 >> x3;
		if (x1 < 0 || x1>23 || x2 < 0 || x2>59 || x3 < 0 || x3>59) throw "Недопустимое значение!";
		t2.set_h(x1); t2.set_m(x2); t2.set_s(x3);
		cout << "Первый объект>> "; t1.print();
		cout << "Второй объект>> "; t2.print();
	}
	catch (const char* s)
	{
		cout << s << endl;
	}
	cout << "Разность объектов>> ";
	t1.difference(t2);
	cout << endl;
	t1.compare(t2);
	cout << "Угол между часовой и минутной стрелками: ";
	t1.angle();
	cout << endl;
}
