#include "Header 10Д.h"

void train::set_arr(train arr[5]) {
	for (int i = 0; i < 5; i++)
	{
		cout << "Введите название, номер, и время: ";
		cin >> arr[i].destination >> arr[i].number >> arr[i].time;
	}
}

void train::show(train arr[5]) {
	printf("|    Название   |Номер|Время|\n");
	for (int i = 0; i < 5; i++)
	{
		/*cout << arr[i].destination<< setw(5);
		cout << arr[i].number<< setw(5);
		cout << arr[i].time<<endl;*/
		printf("|%15s|%5d|%5s|\n", arr[i].destination.c_str(), arr[i].number, arr[i].time.c_str());
	}
}

void train::sort_by_number(train arr[5]) {
	train k[1];
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (arr[j].number > arr[j + 1].number) {
				k[0] = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = k[0];
			}
		}
	}
}

void train::sort_by_destination(train arr[5]) {
	train k[1];
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (arr[j].destination > arr[j + 1].destination) {
				k[0] = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = k[0];
			}
			else if (arr[j].destination == arr[j + 1].destination) {
				if (arr[j].time > arr[j + 1].time) {
					k[0] = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = k[0];
				}
			}
		}
	}
}

void train::find(train arr[5]) {
	int k;
	cout << "Введите номер поезда: ";
	cin >> k;
	for (int i = 0; i < 5; i++)
	{
		if (arr[i].number == k) {
			printf("|    Название   |Номер|Время|\n");
			printf("|%15s|%5d|%5s|\n", arr[i].destination.c_str(), arr[i].number, arr[i].time.c_str());
			break;
		}
	}
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	train ob;
	train arr[5]{};
	int i;
	ob.set_arr(arr);
	ob.sort_by_number(arr);
	ob.show(arr);
	while (true) {
		cout << "Выберите: 1) найти поезд по номеру; 2) отсортировать по пункту назначения: ";
		cin >> i;
		if (i == 1) {
			ob.find(arr);
		}
		else if (i == 2) {
			ob.sort_by_destination(arr);
			ob.show(arr);
		}
	}
}