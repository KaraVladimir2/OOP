#pragma once
#include <iostream>
using namespace std;

template <typename T>
class A;

template <typename T>
ostream& operator<< (ostream& out, const A<T>& a);

template <typename T>
class A {
    T x;
public:
    A() :x(0) {}
    A(T a) :x(a) {}
    T get() { return x; }
    T operator /(A<T> i);
    friend  ostream& operator << <T>(ostream&, const A&);
};