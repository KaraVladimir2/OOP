#pragma once
#include <iostream>
#include <iomanip>
#include "windows.h"
using namespace std;

class PEVM {
    string proc;
    int mgz;
    int ram;
    string type;
public:
    friend ostream& operator<<(ostream& stream, PEVM& o1);
    friend void shapka();
    PEVM() {};
    PEVM(string a, int b, int c, string d);
    string ret_proc();
};

class DB
{
    string title;
    PEVM* rows[12];
    int col;
    int sorted;
public:
    DB(string q);
    ~DB();
    void add_rec(string a, int b, int c, string d);
    void del_rec();
    void sort_DB();
    friend ostream& operator<<(ostream& stream, DB& temp);
};

