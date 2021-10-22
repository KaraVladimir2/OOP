#include "Header.h"


void PEVM::set_proc(string p) { proc = p; }
void PEVM::set_mgz(int m) { mgz = m; }
void PEVM::set_ram(int r) { ram = r; }
void PEVM::set_type(string t) { type = t; }

string PEVM::get_proc() const { return proc; }
int PEVM::get_mgz() const { return mgz; }
int PEVM::get_ram() const { return ram; }
string PEVM::get_type() const { return type; }

void PEVM::shapka() {
	printf("|---------------------------------------------|\n");
	printf("             |Характеристики ПЭВМ|  \n");
	printf("|---------------------------------------------|\n");
	printf("|       Процессор      | Частота  | RAM | Тип |\n");
	printf("|----------------------|----------|-----|-----|\n");
}

PEVM PEVM::operator = (const PEVM& ob) {
	proc = ob.proc;
	mgz = ob.mgz;
	ram = ob.ram;
	type = ob.type;
	return *this;
}
PEVM operator + (const PEVM& ob1, const PEVM& ob2) {
	PEVM temp;
	temp.proc = ob1.proc + " / " + ob2.proc;
	temp.mgz = ob1.mgz + ob2.mgz;
	temp.ram = ob1.ram + ob2.ram;
	temp.type = ob1.type + " / " + ob2.type;
	return temp;
}
int comp(PEVM& ob1, PEVM& ob2) {
	return ob1.mgz - ob2.mgz;
}
ostream& operator << (ostream& out, const PEVM& ob) {
	printf("| %21s| %9d| %4d| %4s|\n", ob.proc.c_str(), ob.mgz, ob.ram, ob.type.c_str());
	return out;
}
istream& operator >> (istream& in, PEVM& ob) {
	cout << "Процессор = ";    in >> ob.proc;
	cout << "Частота (Mgz) = ";    in >> ob.mgz;
	cout << "RAM (MB) = ";	in >> ob.ram;
	cout << "Тип = ";	in >> ob.type;
	cout << endl;
	return in;
}
void PEVM::operator[](int i) {
	cout << proc.length() << endl;
}
PEVM PEVM::operator () (string p, int m, int r, string t) {
	proc = p; mgz = m; ram = r; type = t;
	return *this;
}

int main()
{
	setlocale(LC_ALL, "ru");
	int q, k, l;
	PEVM ob[3];
	string line[4];
	ifstream in("text.txt");
	if (in.is_open())
	{	
		for (int i = 0; i < 3; i++)
		{
				for (int j = 0; j < 4; j++)	in >> line[j];
				ob[i].set_proc(line[0]);
				q = atoi(line[1].c_str());
				ob[i].set_mgz(q);
				q = atoi(line[2].c_str());
				ob[i].set_ram(q);
				ob[i].set_type(line[3]);
				if (in.eof()) break;
		}
	}
	in.close();
	while (true) {
		cout << "Выберите:" << endl << "1) Присвоить одному объекту информацию другого;" << endl
			<< "2) Сложить информацию двух объектов;" << endl
			<< "3) Проверить объекты на соответствие частоты;" << endl
			<< "4) Вывести таблицу с помощью потокового вывода;" << endl
			<< "5) Посчитать длину переменной типа string;" << endl
			<< "6) Изменить какой-то объект." << endl;
		cin >> k;
		if (k == 1) {
			cout << "Укажите объект, которому нужно что-то присвоить: "; cin >> k;
			cout << "Укажите объект, из которого берется информация: "; cin >> l;
			ob[k] = ob[l];
		}
		else if (k == 2) {
			cout << "Укажите первый объект: "; cin >> k;
			cout << "Укажите второй объект: "; cin >> l;
			cout << endl << endl << ob[k] + ob[l] << endl;
		}
		else if (k == 3) {
			cout << "Укажите первый объект: "; cin >> k;
			cout << "Укажите второй объект: "; cin >> l;
			if (comp(ob[k], ob[l]) < 0)cout << endl << "Частота первого больше" << endl << endl;
			else if (comp(ob[k], ob[l]) > 0)cout << endl << "Частота второго больше" << endl << endl;
			else cout << endl << "Они равны" << endl << endl;
		}
		else if (k == 4) {
			ob[0].shapka();
			for (int i = 0; i < 3; i++)
			{
				cout << ob[i];
			}
		}
		else if (k == 5) {
			cout << "Введите номер рядка массива: ";
			cin >> k;
				ob[k][k];
		}
		else if (k == 6) {
			int m, r;
			string p, t;
			cout << "Какой объект хотите изменить: ";
			cin >> k;
			cout << "Введите новые данные(proc, mgz, ram, type): ";
			cin >> p >> m >> r >> t;
			ob[k](p, m, r, t);
		}
	}
}