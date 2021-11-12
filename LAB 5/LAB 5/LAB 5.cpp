#include "Header.h"

bool isParam(const char* c)
{
    if (atoi(c) == 0)
        return true;
    else return false;
}


int main()
{
    setlocale(LC_ALL, "ru");
    string s;
    string q;
    cout << "Введите строку: ";
    getline(cin, s);
    s += " ";
    int size=s.length();
    cout << "1) все буквы в нижнем регистре: ";
    for (int i = 0; i < size; i++)
    {
        if (s[i] == tolower(s[i]) && isParam(&s[i])) {
            if (s[i] == ' ') s[i] = NULL; cout << s[i];
        }
    }
    cout << "\n2) все буквы в верхнем регистре: ";
    for (int i = 0; i < size; i++)
    {
        if (s[i] == toupper(s[i]) && isParam(&s[i])) { if (s[i] == ' ') s[i] = NULL; cout << s[i]; }
    }
    cout << "\n3) все числа в HEX формате: ";
    
    for (int i = 0; i < size; i++)
    {
        if (!isParam(&s[i])) {
            q += s[i];
            if (isParam(&s[i + 1]) || s[i + 1] == ' ') {
                cout << hex << atoi(q.c_str()) << " ";
                q.clear();
            }
        }
    }
    cout << "\n4) вывод с заменой всех пробелов на символ #: ";
    for (int i = 0; i < size; i++)
    {
        if (s[i] == ' ') s[i] = '# ';
        cout << s[i];
    }
}
