#include "Header 10Д.h"

void train::set_arr(train arr[5]) {
	for (int i = 0; i < 5; i++)
	{
		cout << "Введите название, номер, и время: ";
		cin >> arr[i].destination >> arr[i].number >> arr[i].time;
	}
}

void train::set_arr_hard(train arr[5]) {
	arr[0].destination = "Киев"; arr[0].number = 34; arr[0].time = "12:00";
	arr[1].destination = "Харьков"; arr[1].number = 21; arr[1].time = "23:00";
	arr[2].destination = "Херсон"; arr[2].number = 12; arr[2].time = "20:00";
	arr[3].destination = "Днепр"; arr[3].number = 2; arr[3].time = "15:00";
	arr[4].destination = "Харьков"; arr[4].number = 65; arr[4].time = "17:00";
}

void train::show(train arr[5]) {
	printf("|    Название   |Номер|Время|\n");
	for (int i = 0; i < 5; i++)
	{
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
	cout << "Выберите: 1) Ввод вручную; 2) Автоматический ввод: ";
	cin >> i;
	if (i == 1) ob.set_arr(arr);
	else if (i == 2) ob.set_arr_hard(arr);
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