#include "LAB 3Г.h"

int main()
{
    setlocale(LC_ALL, "ru");
    int a, b, c;
    Figure* p;
    Triangle triang;
    Rectangle rect;
    Circle circle;
    p = &triang;
    p->show();
    p = &rect;
    p->show(10,10);
    p = &circle;
    p->show(10);
}