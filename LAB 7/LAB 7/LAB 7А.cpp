#include "LAB 7А.h"

ostream& operator<< (ostream& out, Complex& fp)
{
    if (fp.image < 0) out << fp.real << "+i(" << fp.image << ")\n";
    else out << fp.real << "+i" << fp.image << "\n";
    return out;
}


int main()
{
    setlocale(LC_ALL, "ru");
    Complex arr[5];
    double f[10];
    ifstream infile("in.txt");
    ofstream outfile("out.txt");
    if (infile.is_open()) {
        int j(0);
        while (!infile.eof()) {
            infile >> f[j];
            j++;
        }

    }
    else cout << "Ошибка!\n";
    arr[0].set(f[0], f[1]);
    arr[1].set(f[2], f[3]);
    arr[2].set(f[4], f[5]);
    arr[3].set(f[6], f[7]);
    arr[4].set(f[8], f[9]);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i];
    }


    if (outfile.is_open()) {
        for (int i = 0; i < 5; i++)
        {
            outfile << arr[i];
        }
    }
    infile.close();
    outfile.close();
}