#include "LAB 3В.h"

int main()
{
    srand(time(NULL));
    B2 ob[10];
    for (int i = 0; i < 10; i++) ob[i].show_Base();
    cout << endl;
    for (int i = 0; i < 10; i++) if (ob[i].get_B1() == 3 && ob[i].get_B2() == 2) ob[i].show_Base();
    cout << endl;
}