#pragma once
#include <iostream>
using namespace std;

class Time {
	int hour;
	int min;
	int sec;
public:
	Time() {};
	void set_h(int x) { hour = x; }
	void set_m(int x) { min = x; }
	void set_s(int x) { sec = x; }
	int get_h() { return hour; }
	int get_m() { return min; }
	int get_s() { return sec; }
	void print() { cout << hour << ":" << min << ":" << sec << endl; }
	void difference(Time x) {
		if (hour - x.hour < 0) cout << -(hour - x.hour) << ":";
		else cout << hour - x.hour << ":";
		if (min - x.min < 0) cout << -(min - x.min) << ":";
		else cout << min - x.min << ":";
		if (sec - x.sec < 0) cout << -(sec - x.sec);
		else cout << sec - x.sec;
	}
	void compare(Time x) {
		int time1 = hour * 100 * 100 * 1000
			+ min * 100 * 1000
			+ sec * 1000;
		int time2 = x.hour * 100 * 100 * 1000
			+ x.min * 100 * 1000
			+ x.sec * 1000;
		if (time1 > time2) cout << "Первый объект больше!" << endl;
		if (time1 < time2) cout << "Второй объект больше!" << endl;
		if (time1 == time2) cout << "Объекты равны!" << endl;
	}
	void angle() {
		double t1, t2;
		if (hour < 12) t1 = hour;
		else if (hour >= 12) t1 = hour - 12;
		t2 = double(min) / 5;
		double t = t2 - t1;
		cout << t * 6.0 * 5.0;
	}
};