#include "LAB 8А.h"

template<typename T>
T A<T>::operator / (A<T> i) {
	return this->x / i.x;
}

template<typename T>
ostream& operator << (ostream& out, const A<T>& a) {
	out << a.x;
	return out;
 }

int main()
{
	setlocale(LC_ALL, "ru");
	A<int> x1(5);
	A<int> x2(1);
	try
	{
		if (x2.get() == 0) throw "ERROR: Деление на ноль";
		else cout << "x1 = " << x1 << "	" << "x2 = " << x2 << endl << "x1/x2 = " << x1 / x2 << endl;
	}
	catch (const char * c)
	{
		cout << c << endl;
	}
}
