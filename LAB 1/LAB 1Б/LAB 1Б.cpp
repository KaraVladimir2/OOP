#include "Header.h"

float Figure::kr(Figure& ob) {
	return ob.r * ob.r * pi;
}

float Figure::tr(Figure& ob) {
	if (ob.c != 0)
		return sqrt(pol(ob) * (pol(ob) - ob.a) * (pol(ob) - ob.b) * (pol(ob) - ob.c));
	else return NULL;
}

float Figure::pol(Figure& ob) {
	return (ob.a + ob.b + ob.c) / 2;
}

int main()
{
	setlocale(LC_ALL, "ru"); 
	Figure ob(15);
	cout << "ob" << endl;
	if (ob.tr(ob) == NULL) cout << "Площадь круга: " << ob.kr(ob) << endl;
	else if(ob.tr(ob) >= 0) cout << "Площадь круга: " << ob.kr(ob) << endl <<"Площадь треугольника: " << ob.tr(ob) << endl;
	Figure ob1(13 ,4, 7, 9);
	cout << "ob1" << endl;
	if (ob1.tr(ob1) == NULL) cout << "Площадь круга: " << ob1.kr(ob1) << endl;
	else if (ob1.tr(ob1) >= 0) cout << "Площадь круга: " << ob1.kr(ob1) <<
	endl << "Площадь треугольника: " << ob1.tr(ob1) << endl;
}