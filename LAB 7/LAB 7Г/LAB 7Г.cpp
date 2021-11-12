#include "LAB 7Г.h"

void PEVM::set_proc(string p) { proc = p; }
void PEVM::set_mgz(int m) { mgz = m; }
void PEVM::set_ram(int r) { ram = r; }
void PEVM::set_type(string t) { type = t; }

string PEVM::get_proc() const { return proc; }
int PEVM::get_mgz() const { return mgz; }
int PEVM::get_ram() const { return ram; }
string PEVM::get_type() const { return type; }

void R::set(PEVM &ob, string p, int m, int r, string t) { ob.set_proc(p); ob.set_mgz(m); ob.set_ram(r); ob.set_type(t); }

void R::show(PEVM ob) { 
	cout << ob.get_proc() << " " << ob.get_mgz() << " " << ob.get_ram() << " " << ob.get_type() << endl; };

void R::writeToFile(string filename, PEVM data) {
	ofstream outfile(filename);
	if (outfile.is_open()) {
		outfile << data.get_proc() << " " << data.get_mgz() << " " << data.get_ram() << " " << data.get_type() << endl;
		outfile.close();
	}
}

void R::readFromFile(string filename, PEVM& data, int n) {
	struct MyStruct
	{
		string p;
		int m;
		int r;
		string t;
	};
	MyStruct s;
	ifstream infile(filename);
	if (infile.is_open()) {
		while (n!= -1) {
			infile >> s.p >> s.m >> s.r >> s.t;
			n--;
		}
		infile.close();
		data.set_proc(s.p); data.set_mgz(s.m); data.set_ram(s.r); data.set_type(s.t);
	}
}

void R::save(string filename, PEVM* data) {
	ofstream outfile(filename);
	if (outfile.is_open()) {
		for (int i = 0; i < 3; i++)
		{
			outfile << data[i].get_proc()<<" " << data[i].get_mgz()<<" " <<
				data[i].get_ram() << " " << data[i].get_type() << endl;
		}
		
		outfile.close();
	}

}

void R::restore(string filename, PEVM* data) {
	struct MyStruct
	{
		string p;
		int m;
		int r;
		string t;
	};
	MyStruct s;
	ifstream infile(filename);
	if (infile.is_open()) {
		for (int i = 0; i < 3; i++)
		{
			infile >> s.p >> s.m >> s.r >> s.t;
			data[i].set_proc(s.p); data[i].set_mgz(s.m); data[i].set_ram(s.r); data[i].set_type(s.t);
		} 
		infile.close();
	}
}

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int k, n;
	PEVM ob[3];
	R ob1;
	ob1.set(ob[0], "Pentium-III", 233, 8, "C");
	ob1.set(ob[1], "AMD-К6", 166, 16, "C");
	ob1.set(ob[2], "PowerPC-620", 2000, 32, "R");
	while (true) {
		cout << "Выберите вариант:" << endl << "1) Вывести массив объектов;" << endl <<
			"2) Сохранить объект класса в файл;" << endl << "3) Восстановить объект класса из файла;" <<
			endl << "4) Сохранить весь массив объектов в файл;" << endl <<
			"5) Чтение всего массива объектов класса из файла." << endl;
		cin >> k;
		switch (k)
		{
		case 1:
			cout << endl;
			ob1.show(ob[0]);
			ob1.show(ob[1]);
			ob1.show(ob[2]);
			cout << endl;
			break;
		case 2:
			cout << "Введите номер нужного объекта: ";
			try {
				cin >> n;
				if (n < 0 || n>2) throw "Введен неправильный номер объекта!";
				ob1.writeToFile("2.txt", ob[n]);
				break;
			}
			catch (const char* s) {
				cout << endl << s << endl << endl;
				break;
			}
		case 3:
			cout << "Введите номер объекта, который нужно восстановить: ";
			try {
				cin >> n;
				if (n < 0 || n>2) throw "Введен неправильный номер объекта!";
				ob1.readFromFile("3.txt", ob[n], n);
				break;
			}
			catch (const char* s) {
				cout << endl << s << endl << endl;
				break;
			}
		case 4:
			ob1.save("4.txt", ob);
			break;
		case 5:
			ob1.restore("5.txt", ob);
			break;
		default:
			cout << "Неверный вызов!" << endl;
			break;
		}
	}
}