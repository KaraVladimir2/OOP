#include "LAB 3Г.h"

int main()
{
    setlocale(LC_ALL, "ru");
    Figure* p;
    Triangle triang(10, 10, 10);
    Rectangle rect(10, 20);
    Circle circle(10);
    p = &triang;
    cout << "Площадь треуголника: " << p->Square() << endl;
    p = &rect;
    cout << "Площадь прямоуголника: " << p->Square() << endl;
    p = &circle;
    cout << "Площадь круга: " << p->Square() << endl;
}