#include "Header.h"

void Complex::init(float x, float y)
{
	r = x;
	m = y;
}

void Complex::add(Complex& c, int r1, int m1) {
	c.r = c.r + r1;
	c.m = c.m + m1;
}

void Complex::print(Complex& c) {
	cout << "r = " << r << "	" << "m = " << m << endl;
}

Complex Complex::add_complex(Complex& a, Complex& b) {
	Complex x;
	a.r = a.r + b.r;
	a.m = a.m + b.m;
	return a;
}

int main()
{
	setlocale(LC_ALL, "ru");
	Complex c, c1;
	float r1, m1;
	int k;
	cout << "Введите r: ";
	cin >> r1;
	cout << "Введите m: ";
	cin >> m1;
	c.init(r1, m1);
	
	while (true) {
		cout << "Выберите:" << endl << "1) добавление к r и m целых чисел;" << endl
			<< "2) сложить два комплексных числа;" << endl << "3) вывод комплексного числа" << endl;
		cin >> k;
		if (k == 1) {
			cout << "Какое число добавить к r: ";
			cin >> r1;
			cout << "Какое число добавить к m: ";
			cin >> m1;
			c.add(c,r1, m1);
		}
		else if (k == 2) {
			c.add_complex(c, c1);
		}
		else if (k == 3) {
			c.print(c);
		}
	}
}
