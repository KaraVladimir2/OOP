#include "Header.h"

DB::DB(string q)
    : col(0), sorted(0)
{
    title = q;
}

DB::~DB()
{
    if (col)
    {
        for (int i = 0; i < col; i++)
            delete &rows[i];
    }
}

void DB::add_rec(string a, int b, int c, string d)
{
    if (col >= 12)
        return;
    else col++;
    rows[col - 1] = new PEVM (a, b, c, d);
    sorted = 0;
}

void DB::del_rec()
{
    if (col <= 0)
        return;
    delete rows[col - 1];
    col--;
}

void DB::sort_DB()
{
    string s1;
    string s2;
    if (col < 2)
        return;
    PEVM *temp;

    for (int i = 0; i < col; i++)
    {
        for (int j = i + 1; j < col; j++)
        {
            s1 = rows[i]->ret_proc();
            s2 = rows[j]->ret_proc();
            if (s1>s2)
            {
                temp = rows[i];
                rows[i] = rows[j];
                rows[j] = temp;
            }
        }
    }
    sorted = 1;
}

void shapka() {
    printf("|---------------------------------------------|\n");
    printf("             |Характеристики ПЭВМ|  \n");
    printf("|---------------------------------------------|\n");
    printf("|       Процессор      | Частота  | RAM | Тип |\n");
    printf("|----------------------|----------|-----|-----|\n");
}

ostream& operator<<(ostream& stream, DB& o1)
{
    stream << o1.title << endl;
    if (o1.sorted == 0)
        stream << "Таблица не отсортирована.\n";
    else
        stream << "Таблица отсортирована.\n";
    
    if (!o1.col)
        stream << "Таблица пуста.";
    else
    {
        shapka();
        for (int i = 0; i < o1.col; i++)
            stream << *o1.rows[i];
    }
    return stream;
}

ostream& operator<<(ostream& stream, PEVM& o1)
{
    stream << "|" << setw(22) << o1.proc << "|";
    stream << setw(10) << o1.mgz << "|";
    stream << setw(5) << o1.ram << "|";
    stream << setw(5) << o1.type << "|" << endl;
    return stream;
}


PEVM::PEVM(string a, int b, int c, string d)
    : proc(a),mgz(b), ram(c), type(d) {}

string PEVM::ret_proc()
{
    return proc;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string n;
    int t;
    int s;
    string h;
    int p;
    DB* tmp = new DB("\nБАЗА ДАННЫХ\n");

    for (int a = 0; !a;)
    {
        cout << "1. Добавить запись\n";
        cout << "2. Добавить заготовленную запись\n";
        cout << "3. Удалить запись\n";
        cout << "4. Сортировать базу\n";
        cout << "5. Вывести базу\n";
        cout << "6. Выход\n";
        cout << "> ";
        cin >> p;
        switch (p)
        {
        case 1:
            cout << "Процессор, частота, RAM, тип \n";
            cin >> n;  
            cin >> t;       
            cin >> s;         
            cin >> h;
            tmp->add_rec(n,t,s,h);
            break;
        case 2:
            tmp->add_rec("Pentium-III", 233, 8, "C");
            tmp->add_rec("AMD-K6", 166, 16, "C");
            tmp->add_rec("PowerPC-620", 2000, 32, "R");
            break;
        case 3:
            tmp->del_rec();
            break;
        case 4:
            tmp->sort_DB();
            break;
        case 5:
            cout << *tmp;
            cout << "\nНажмите клавишу для продолжения..." << endl;
            break;
        case 6:
            a = 1;
            break;
        default:
            cout << "Неверный вызов";
            break;
        }
    }
}