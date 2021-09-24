#include "Header.h"
int MASTER::count = 0;
DOG::DOG() :name("Пудель"), weight(0), age(0) {}
DOG::DOG(const string n, const int w, const int a) : name(n), weight(w), age(a) {}

MASTER::MASTER() {
    count++;
    cout << "count = " << count << endl;
    name = "master" + to_string(count);
    dogs[0].set_dog_name("Пудель");  dogs[0].set_dog_weight(4); dogs[0].set_dog_age(3);
    dogs[1].set_dog_name("Овчарка");  dogs[1].set_dog_weight(5); dogs[1].set_dog_age(3);
}

MASTER::MASTER(const string n, const int k) {
    string nd;
    int w, a;
    count++;
    name = n;
    for (int i = 0; i < k; i++)
    {
        cout << "Введите название, вес и возраст собаки: ";
        cin >> nd >> w >> a;
        dogs[i].set_dog_name(nd); dogs[i].set_dog_weight(w); dogs[i].set_dog_age(a);
    }
}

void DOG::set_dog_name(const string& n) { name = n; }
void DOG::set_dog_weight(const int& w) { weight = w; }
void DOG::set_dog_age(const int& a) { age = a; }

string DOG::get_dog_name() const { return name; }
int DOG::get_dog_weight() const { return weight; }
int DOG::get_dog_age() const { return age; }

void MASTER::set_name_master(const string& n) {name = n;}

void MASTER::set_name_dog(const string& n, const int& k) {dogs[k].set_dog_name(n);}

void MASTER::set_weight(const int& w, const int& k) {dogs[k].set_dog_weight(w);}

void MASTER::set_age(const int& a, const int& k) {dogs[k].set_dog_age(a);}

void MASTER::show() const {
    cout << name << "  " << id << " " << "Собаки: ";
    for (int i = 0; i < 10; i++) {
        if (dogs[i].get_dog_age() == 0) break;
        cout << dogs[i].get_dog_name() << " " << dogs[i].get_dog_weight() << " " 
            << dogs[i].get_dog_age()<<", ";
    }
    cout << endl;
}

int MASTER::show_count()const {return count;}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int k, a;
    string name_master, name_dog;
    cout << "Введите имя владельца: ";
    cin >> name_master;
    cout << "Сколько собак у владельца?: ";
    cin >> k;
    MASTER master1(name_master, k);
        cout << "Введите имя владельца: ";
        cin >> name_master;
        cout << "Сколько собак у владельца?: ";
        cin >> k;
        MASTER master2(name_master, k);
        cout << endl << endl << endl;
        master1.show();
        master2.show();
        cout << "Количество членов клуба = " << master1.show_count() << endl;
        cout << endl << endl << endl;
        while (true) {
            cout << "Информацию какого хозяина хотите изменить(1 или 2)?: " << endl;
            cin >> k;
            if (k == 1) {
                cout << "Выберите: 1) Изменить имя хозяина, 2) Изменить название собаки," << endl
                    << "3) Изменить вес собаки, 4) Изменить возраст собаки" << endl;
                cin >> k;
                if (k == 1) {
                    cout << "Введите новое имя: ";
                    cin >> name_master;
                    master1.set_name_master(name_master);
                }
                else if (k == 2) {
                    cout << "Название какой собаки вы хотите изменить?: ";
                    cin >> a;
                    cout << "Введите новое название: ";
                    cin >> name_master;
                    master1.set_name_dog(name_master, a);
                }
                else if (k == 3) {
                    cout << "Вес какой собаки вы хотите изменить?: ";
                    cin >> a;
                    cout << "Введите новый вес: ";
                    cin >> k;
                    master1.set_weight(k, a);
                }
                else if (k == 4) {
                    cout << "Возраст какой собаки вы хотите изменить?: ";
                    cin >> a;
                    cout << "Введите новый возраст: ";
                    cin >> k;
                    master1.set_age(k, a);
                }
            }
            else if (k == 2) {
                cout << "Выберите: 1) Изменить имя хозяина, 2) Изменить название собаки," << endl
                    << "3) Изменить вес собаки, 4) Изменить возраст собаки" << endl;
                cin >> k;
                if (k == 1) {
                    cout << "Введите новое имя: ";
                    cin >> name_master;
                    master2.set_name_master(name_master);
                }
                else if (k == 2) {
                    cout << "Название какой собаки вы хотите изменить?: ";
                    cin >> a;
                    cout << "Введите новое название: ";
                    cin >> name_master;
                    master2.set_name_dog(name_master, a);
                }
                else if (k == 3) {
                    cout << "Вес какой собаки вы хотите изменить?: ";
                    cin >> a;
                    cout << "Введите новый вес: ";
                    cin >> k;
                    master2.set_weight(k, a);
                }
                else if (k == 4) {
                    cout << "Возраст какой собаки вы хотите изменить?: ";
                    cin >> a;
                    cout << "Введите новый возраст: ";
                    cin >> k;
                    master2.set_age(k, a);
                }
            }
            cout << endl << endl << endl;
            master1.show();
            master2.show();
            cout << "Количество членов клуба = " << master1.show_count() << endl;
            cout << endl << endl << endl;

        }
}