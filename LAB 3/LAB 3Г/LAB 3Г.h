#pragma once
#include <iostream>
using namespace std;

class Figure {
public:
    virtual void show(int a =10, int b = 10, int c = 10) = 0;
};

class Triangle : public Figure {
    int a1 = 0;
    int b1 = 0;
    int c1 = 0;
public:
    Triangle(){}
    virtual void show(int a, int b, int c) override {
        a1 = a; b1 = b; c1 = c;
        cout << "Triangle = " << 
            sqrt(((a + b + c) / 2) * (((a + b + c) / 2) - a) * (((a + b + c) / 2) - b) * (((a + b + c) / 2) - c)) 
            << endl; }
};

class Rectangle : public Figure {
    int a1;
    int b1;
public:
    Rectangle(){}
    virtual void show(int a, int b, int c) override {
        a1 = a; b1 = b;
        cout << "Rectangle = " << a * b << endl;}
};

class Circle : public Figure {
    int radius;
public:
    Circle(){}
    virtual void show(int a, int b, int c) override {
        radius = a;
        cout << "Circle = " << radius * radius * 3.14 << endl; }
};