#include "Header.h"

int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(NULL));

    Num n1;
    Num n2(10, 1, 10);
    Num n3(n1);
    cout << "n1 = ";
    n1.print();
    cout << "n2 = ";
    n2.print();
    cout << "n3 = ";
    n3.print();

    cout << "max(n1) = ";
    cout << n1.max() << std::endl;
    cout << "max(n2) = ";
    cout << n2.max() << std::endl;
    cout << "max(n3) = ";
    cout << n3.max() << std::endl;

    cout << "Объединение n1 и n2: ";
    n1.combine(n2);
    cout << endl;

    cout << "Пересечение n1 и n2: ";
    n1.intersection(n2);
    cout << endl;

    cout << "Разность n1 и n2: ";
    n1.difference(n2);
    cout << endl;

    cout << "Дизъюнктивной суммы n1 и n2: ";
    n1.diz_sum(n2);
    cout << endl;
}
