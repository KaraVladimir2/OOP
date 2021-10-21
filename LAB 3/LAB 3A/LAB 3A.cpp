#include "LAB 3A.h"

int main() {
	setlocale(LC_ALL, "ru");
	Sobaka ob1(5, 2);
	Spaniel ob2("Черный");
	ob1.show_Sobaka();
	ob2.show_Spaniel();
	ob1.golos();

}