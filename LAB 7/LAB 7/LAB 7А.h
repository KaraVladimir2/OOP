#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class Complex
{
private:
    double real;    
    double image;  
public:
    Complex() {};  
    void set(double a, double b) { real = a; image = b; }
    friend ostream& operator<<(ostream&, Complex&);
};