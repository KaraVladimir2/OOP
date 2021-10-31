#include "LAB 3Д.h"

int main()
{
    setlocale(LC_ALL, "ru");
    int m[3][5]{
        {5,4,3,2,4},
        {3,3,2,1,4},
        {5,5,5,4,5}
    };
    Prepod pr[2] = {
        {"Гатченко М. О.", 45, "OOП", 2},
        {"Гончаренко Н.Ю.", 51, "ООП", 2}
    };
    Student st[3]{
        {"Кара В. В.", 18, m[0]},
        {"Величко И. И.", 17, m[1]},
        {"Охрименко М. С.", 18, m[2]}
    };
    Zav_kaf za{ "Попов А. В.", 45, "OOП", 2,"Зав. каф."};

    VUZ Shtat;
    for (int i = 0; i < 2; i++)
        Shtat.p[i] = pr[i];
    for (int i = 0; i < 3; i++)
        Shtat.s[i] = st[i];
    Shtat.z = za;

    for (int i = 0; i < 2; i++)
        if (Shtat.p[i].get_age() < 50) Shtat.p[i].print();

    cout << endl;

    for (int i = 0; i < 3; i++)
        if (Shtat.s[i].ask() > 0) Shtat.s[i].print();
}