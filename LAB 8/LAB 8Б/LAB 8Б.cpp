#include "Lab 8Б.h"


template <typename T> void Mas<T>::set(int i, T a) {
	arr[i] = a;
}

template <typename T> T Mas<T>::sum() {
	T result(0);
	for (int i = 0; i < ind; i++)
	{
		result += arr[i];
	}
	return result;
}

template <typename T> double Mas<T>::ari() {
	try
	{
		if (ind == 0) throw "ERROR: Деление на ноль";
		else return double(sum()) / double(ind);
	}
	catch (const char*s)
	{
		cout << s << endl;
		exit(0);
	}
}

template <typename T> T& Mas<T>::operator[] (const int ind) {
	T max = arr[0];
	for (T i = 1; i < ind; i++)
	{
		if (max < arr[i]) max = arr[i];
	}
	return max;
}

template<typename T> ostream& operator << (ostream& out, const Mas<T>& a) {
	for (int i = 0; i < a.ind; i++)
	{
		out << a.arr[i] << " ";
	}
	return out;
}


int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	Mas<int> m;
	int k(0);

	for (int i = 0; i < m.get_ind(); i++)
	{
		int k = rand() % 50;
		m.set(i, k);
	}
	cout << m << endl;
	cout << "Сумма значений = " << m.sum() << endl;
	cout << "Среднеарифметическое значений = " << m.ari() << endl;
	int max = m[m.get_ind()];
	cout << "Максимальное значение = " << max << endl;
}