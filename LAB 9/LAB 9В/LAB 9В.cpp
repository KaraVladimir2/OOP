#include "LAB 9В.h"

void STAFF::insert() {
    string names[5] = { "Vasya", "Kolya", "Anton", "Sasha", "Anton" };
    int voz[5] = { 22, 22, 24, 25, 22 };
    for (int i = 0; i < 5; i++) {
        m1.insert({ Person(names[i],voz[i]),  ++count });

        m2.insert({ Person(names[i],voz[i]),  ++count });
    }
}

void STAFF::print_all() {
    cout << "Печать всех полей" << endl;
    cout << "m1: " << endl;
    for (const auto& x : m1)
        cout << x.first << endl;
    cout << "m2: " << endl;
    for (const auto& x : m2)
        cout << x.first << endl;
}

void STAFF::print_name() {
    cout << "Печать только поля name" << endl;
    cout << "m1: " << endl;
    for (auto p = begin(m1); p != end(m1); p++)
        cout << const_cast<Person&>(p->first).get_name() << endl;
}

void STAFF::print_age() {
    cout << "Печать только поля age" << endl;
    cout << "m1: " << endl;
    for (auto p = begin(m1); p != end(m1); p++)
        cout << ((Person&)p->first).get_age() << endl;
}

void STAFF::del_name() {
    string n;
    cout << "УДАЛЕНИЕ" << endl;
    cout << "Элемент с какой фамилией удалить?: ";
    cin >> n;
    try
    {
        int k = 0;
        for (auto p = begin(m1); p != end(m1); ) {
            if (const_cast<Person&>(p->first).get_name() == n) { p = m1.erase(p); k++; }   
            else if(p == --end(m1) && k == 0) throw("Такой фамилии нет!");
            else
                p++;
        }
    }
    catch (const char* s)
    {
        cout << s << endl;
    }
    
    cout << "m1:" << endl;
    for (const auto& x : m1)
        cout << x.first << endl;
}

void STAFF::in() {
    string n;
    int a;
    cout << "ВСТАВКА" << endl;
    cout << "Введите фамилию и возраст через пробел: ";
    cin >> n >> a;
    m1.insert({ Person(n,a),  ++count });
    cout << "m1:" << endl;
    for (const auto& x : m1)
        cout << x.first << endl;
}

void STAFF::find_name() {
    string s;
    cout << "Функция поиска по фамилии" << endl;
    cout << "Введите фамилию для поиска: ";
    cin >> s;
    try
    {
        int k = 0;
        for (auto p = begin(m1); p != end(m1); ) {
            if (const_cast<Person&>(p->first).get_name() == s) { cout << const_cast<Person&>(p->first) << endl; k++; p++; }
            else if (p == --end(m1) && k == 0) throw("Такой фамилии нет!");
            else
                p++;
        }
    }
    catch (const char* s)
    {
        cout << s << endl;
    }
}

void STAFF::find_age() {
    int s;
    cout << "Функция поиска по возрасту" << endl;
    cout << "Введите возраст для поиска: ";
    cin >> s;
    try
    {
        int k = 0;
        for (auto p = begin(m1); p != end(m1); ) {
            if (const_cast<Person&>(p->first).get_age() == s) { cout << const_cast<Person&>(p->first) << endl; p++; k++; }
            else if (p == --end(m1) && k == 0) throw("Такого возраста нет!");
            else
                p++;
        }
    }
    catch (const char* s)
    {
        cout << s << endl;
    }
}

int main()
{
    setlocale(LC_ALL, "ru");
    STAFF s;
    s.insert();
    s.print_all();
    s.print_name();
    s.print_age();
    s.del_name();
    s.in();
    s.find_name();
    s.find_age();
}
