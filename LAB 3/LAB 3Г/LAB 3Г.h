#pragma once
#include <iostream>
using namespace std;

class Figure {
public:
    virtual double Square() = 0;
    virtual void show() = 0;
};

class Triangle : public Figure {
    int a;
    int b;
    int c;
public:
    Triangle(int x, int y, int z) : a(x), b(y), c(z) {}
    double Square() override {
        int p = (a + b + c) / 2;
        return (sqrt(p * (p - a) * (p - b) * (p - c)));
    }
    void show() { cout << "Rectangle" << endl; }
};

class Rectangle : public Figure {
    int a;
    int b;
public:
    Rectangle(int w, int h) : a(w), b(h){}
    double Square() override {return a * b;}
    void show() {cout << "Rectangle" << endl;}
};

class Circle : public Figure {
    int radius;
public:
    Circle(int r = 10) : radius(r) {}
    double Square() override {return radius * radius * 3.14;}
    void show() {cout << "Circle" << endl; }
};