#include "LAB 7В.h"

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	int mas[10];
	int mas2[10];
	int x, b1(77), b2(88);
	for (int i = 0; i < 10; i++) { mas[i] = rand() % 11; cout << mas[i] << "  ";}
	fstream f1("file.txt", ios::binary | ios::in | ios::out);
	try
	{
		if (f1.is_open()) {
			f1.write((char*)mas, sizeof(mas));

			f1.seekg(4 * sizeof(int), ios::beg);
			f1.read((char*)&x, sizeof(int));
			if (x % 2 == 0) {
				for (int i = 0; i < 4; i++)
				{
					f1.seekp(i * sizeof(int), ios::beg);
					f1.write((char*)&b1, sizeof(int));
				}
			}
			else if (x % 2 != 0) {
				for (int i = 5; i < 10; i++)
				{
					f1.seekp(i * sizeof(int), ios::beg);
					f1.write((char*)&b2, sizeof(int));
				}
			}
			f1.seekg(0, ios::beg);
			f1.read((char*)mas2, sizeof mas2);
			cout << endl;
			for (int i = 0; i < 10; i++) cout << mas2[i] << "  ";
		}
		else throw "Ошибка открытия файла!\n";
	}
	catch (const char* s)
	{
		cout << endl << s << endl << endl;
	}
	f1.close();
}