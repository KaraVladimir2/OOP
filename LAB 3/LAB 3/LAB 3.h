#pragma once
#include <iostream>

using namespace std;

class B1 {
	int b1;
public:
	B1(int x) { b1 = x; };
	int get_b1() { return b1; }
	/*virtual void show() { cout << "B1= " << b1 << endl << endl; }*/
	friend ostream& operator <<(std::ostream& out, const B1& ob) {
		out << "  b1 = " << ob.b1 << endl;
		return out;
	}

};
class B2 {
	int b2;
public:
	B2(int x) { b2 = x; }
	int get_b2() { return b2; }
	/*virtual void show() { cout << "B2= " << b2 << endl << endl; }*/
	friend ostream& operator <<(std::ostream& out, const B2& ob) {
		out << "  b2 = " << ob.b2 << endl;
		return out;
	}
};
class D1 : public B1, public B2 {
	int d1;
public:
	D1(int x1, int x2, int x3) : B1(x1), B2(x2) { d1 = x3; };
	int get_d1() { return d1; }
	/*virtual void show() {
		cout << "B1= " << get_b1() << endl
			<< "B2= " << get_b2() << endl << "D1= " << d1 << endl << endl;
	}*/
	friend ostream& operator <<(std::ostream& out, const D1& ob) {
		out << (B1&)ob << (B2&)ob;
		out << "  d1 = " << ob.d1 << endl;
		return out;
	}
};
class D2 {
	int d2;
public:
	D2(int x) { d2 = x; }
	int get_d2() { return d2; }
	//virtual void show() { cout << "D2= " << d2 << endl << endl; }
	friend ostream& operator <<(std::ostream& out, const D2& ob) {
		out << "  d2 = " << ob.d2 << endl;
		return out;
	}
};
class D3 : public D1, public D2 {
	int d3;
public:
	 D3(int x1, int x2, int x3, int x4, int x5) : D1(x1,x2,x3), D2(x4) { d3 = x5; };
	 int get_d3() { return d3; }
	 /*virtual void show() {
		 cout << "B1= " << get_b1() << endl << "B2= " << get_b2() << endl
			 << "D1= " << get_d1() << endl << "D2= " << get_d2() << endl << "D3= " << d3 << endl << endl;
	 }*/
	 friend ostream& operator <<(std::ostream& out, const D3& ob) {
		 out << (D1&)ob << (D2&)ob;
		 out << "  d3 = " << ob.d3 << endl;
		 return out;
	 }
};
class D4 :public D3 {
	int d4;
public:
	 D4(int x1, int x2, int x3, int x4, int x5, int x6) : D3(x1,x2,x3,x4,x5) { d4 = x6; };
	 /*virtual void show() {
		 cout << "B1= " << get_b1() << endl << "B2= " << get_b2() << endl
			 << "D1= " << get_d1() << endl << "D2= " << get_d2() << endl
			 << "D3= " << get_d3() << endl << "D4 = " << d4 << endl << endl;
	 }*/
	 friend ostream& operator <<(std::ostream& out, const D4& ob) {
		 out << (D3&)ob;
		 out << "  d4 = " << ob.d4 << endl;
		 return out;
	 }
};