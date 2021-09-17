#include "Header 10Е.h"

void mas::podarr() {
    int stroka, stolb, x, y;
    cout << "Введите размер подматрицы(строка, столбец): ";
    cin >> stroka >> stolb;
    cout << "Введите начальную позицию подматрицы(строка, столбец): ";
    cin >> x >> y;
    for (int i = y-1; i < stolb; i++) {
        for (int j = x-1; j < stroka; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }           
}

void mas::find_and_change() {
    int x, y, q;
    string k;
    cout << "Введите координаты элемента(строка, столбец): ";
    cin >> x >> y;
    cout << arr[x-1][y-1] << endl;
        cout << "Введите новое значение: ";
        cin >> q;
        arr[x-1][y-1] = q;
}

void mas::find_min(int x,int y) {
    int min = arr[0][0];
    int index1(0), index2(0);
    for (int i = 0; i < y; i++)
        for (int j = 1; j < x; j++)
            if (min > arr[i][j])
            {
                min = arr[i][j];
                index1 = i;
                index2 = j;
            }
    cout << index1+1<<" строка" << " " << index2 + 1<<" столбец" << endl;
    for (int i = index1+1; i < y; i++)
        for (int j = index2+1; j < x; j++)
            if (min == arr[i][j])
            {
                min = arr[i][j];
                cout << i + 1 << " строка" << " " << j + 1 << " столбец" << endl;
            }
}

void mas::gen()
{
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr[i][j] = rand() % 100;
        }
    }
}

void mas::show()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}


int main(){
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int k(10), x, y;
    cout << "Введите размер массива(строка, столбец): ";
        cin >> x >> y;
    mas ob(x,y);
    
    while (true)
    {
        cout << "Введите соответствующую цифру(1-генерация случайного массива, 2-показать массив,\n3-найти координаты минимального элемента, 4-найти и заменить, 5-выделить подматрицу): ";
        cin >> k;
        if (k == 1) {
            k = 10;
            ob.gen();
        }
        else if (k == 2) {
            ob.show();
            k = 10;
        }
        else if (k == 3) {
            ob.find_min(x,y);
            k = 10;
        }
        else if (k == 4) {
            ob.find_and_change();
        }
        else if (k == 5) {
            ob.podarr();
        }
    }
}