#include "LAB 9А.h"

bool operator == (const SUM& c1, const SUM& c2) {
	if (c1.sum == c2.sum) { cout << "Суммы элементов вектора РАВНЫ!" << endl; return true; }
	else if (c1.sum > c2.sum) { cout << "Сумма элементов первого вектора БОЛЬШЕ!" << endl; return false; }
	else if (c1.sum < c2.sum) { cout << "Сумма элементов первого вектора МЕНЬШЕ!" << endl; return false; }
}

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
    vector <SUM> v1(5);
	vector <SUM> v2(5);
	for (int i = 0; i < v1.size(); i++)
	{
		v1[i] = { rand() % 20,rand() % 20 };
	}

	for (int i = 0; i < v1.size(); i++)
	{
		cout << "v1[" << i << "] = " << v1[i].get_sum() << endl;
	}

	for (int i = 0; i < v2.size(); i++)
	{
		v2[i] = { rand() % 20,rand() % 20 };
	}
	cout << endl;
	for (int i = 0; i < v2.size(); i++)
	{
		cout << "v2[" << i << "] = " << v2[i].get_sum() << endl;
	}
	cout << endl;
	for (int i = 0; i < v1.size(); i++)
	{
		v1[i] == v2[i];
	}
}
