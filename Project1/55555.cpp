#include <iostream>
#include <math.h>
using namespace std;

int main(){
	//показчик

	//синтаксис
	//звичайна змінна - тип назва;
	// показчик/вказівник/поінтер - тип* назва;
	//показчик має право зберігати інформацію, де розташований об'єкт в пам'яті

	double a = 2.6;
	double* p1;
	p1 = &a;
	
	cout << p1 << endl;
	cout << &a << endl;
	cout << *p1 << endl; //взяти об'єкт за вказаною адресою

	a = 5.8;

	cout << *p1 << endl;

	cout << &p1 << endl;

	double** pp1;
	pp1 = &p1;

	cout << pp1 << endl;

	return 0;
};