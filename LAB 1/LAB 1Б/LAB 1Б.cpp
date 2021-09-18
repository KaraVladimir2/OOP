#include "Header.h"

float Figure::kr(Figure& ob) {
	return ob.r * ob.r * pi;
}

float Figure::tr(Figure& ob) {
	return sqrt(pol(ob)*(pol(ob)-ob.a)*(pol(ob)-ob.b)*(pol(ob)-ob.c));
}

float Figure::pol(Figure& ob) {
	return (ob.a + ob.b + ob.c) / 2;
}

int main()
{
	setlocale(LC_ALL, "ru");
	Figure ob;
	cout << "Площадь круга: " << ob.kr(ob) << endl << "Площадь треугольника: " << ob.tr(ob);
}