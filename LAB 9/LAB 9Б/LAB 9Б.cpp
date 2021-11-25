#include "LAB 9Б.h"

ostream& operator<< (ostream& out, const NAME& point)
{
    out << point.name;

    return out;
}

ostream& operator<< (ostream& out, const NUMBER& point)
{
    out << point.num;

    return out;
}



int main()
{
    setlocale(LC_ALL, "ru");
    string names[5] = { "Vasya" ,"Kolya","Petya","Sasha","Artem"};
    string nums[5] = { "+380953854912" ,"+380974930521","+380502582396","+38063459563","+380951466188" };
    
    map<NAME, NUMBER> m;
    map <NAME, NUMBER> ::iterator it;

    for (int i = 0; i < 5; i++)
        m.insert({ NAME(names[i]), NUMBER(nums[i]) });
    for (auto p = begin(m); p != end(m); p++)
        cout << p->first << " " << p->second << endl;

    string N1;
    cout << "Enter name: "; cin >> N1;
    it = m.find(N1);
    if (it == m.end()) cout << "Record not found!" << endl;
    else cout << (*it).second << endl;

}
