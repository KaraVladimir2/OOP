#include "LAB 7Б.h"

ostream& operator<< (ostream& out, Print& fp)
{
    
    return out;
}

bool Print::isParam(const char* c)
{
    if (atoi(c) == 0)
        return true;
    else return false;
}

void Print::show() {
    cout << s;
}

int main()
{
	setlocale(LC_ALL, "ru");
    Print p("dkgKMAMRkwek234pwerWAKM1255");
    int size = p.s.length();
    ofstream outfile("out.txt");
    if (outfile.is_open()) {
        for (int i = 0; i < size; i++)
        {
            if (p.s[i] != toupper(p.s[i]) && p.isParam(&p.s[i])) {
                outfile << p.s[i];
            }
        }
    }
    
    outfile.close();
}
