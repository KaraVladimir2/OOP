#include "Header.h"

void PEVM::set_proc(string p){proc = p;}
void PEVM::set_mgz(int m) {mgz = m;}
void PEVM::set_ram(int r) { ram = r; }
void PEVM::set_type(string t) {type = t;}

string PEVM::get_proc() const {return proc;}
int PEVM::get_mgz() const { return mgz; }
int PEVM::get_ram() const { return ram; }
string PEVM::get_type() const { return type; }

void PEVM::show() {
	cout << get_proc() << " " << get_mgz() << " " << get_ram() << " " << get_type() << endl;

}

int main()
{
	setlocale(LC_ALL, "ru");
	PEVM ob;
	string s;
	int i;
	cout << "Введите процессор: "; cin >> s;
	ob.set_proc(s);
	cout << "Введите частоту: "; cin >> i;
	ob.set_mgz(i);
	cout << "Введите RAM: "; cin >> i;
	ob.set_ram(i);
	cout << "Введите тип: "; cin >> s;
	ob.set_type(s);
	cout << endl << endl;
	ob.show();
}
