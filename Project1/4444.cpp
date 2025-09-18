#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main() {

	/*int a = 5;
	int b = 7;
	int min = (a < b) ? a : b;

	if (a < b) {
		min = a;
	}
	else {
		min = b;
	};

	cout << "min = " << min << endl;*/

	/*double x, a;
	cout << "enter number a: ";
	cin >> a;
	cout << "enter number x: ";
	cin >> x;

	double y = (a > 0 && x > 0) ? y = exp(pow(x, a)) : y = pow(x, exp(a));
	if (a > 0 && x > 0) {

		y = exp(pow(x, a));

	}
	else {

		y = pow(x, exp(a));

	};
	 
	cout << "y =" << y << endl;

	//оце через умовний оператор*/

	//ЦИКЛИ for, while, do while.

	//один прохід циклу - ітерація


	//const double E = 0.0001;  //0.0001 - точність, різні змінні можуть показувати з різною точніст
	//for (double x = -2.0;  x < 2.0 + E; x+=0.2) 
	//	cout<< x << endl;
    //cout << "exit" << endl;

	//різні змінні зберігають числа в різній "величині" (більше,менше цифр після коми)

	/*int x = 0, y = 0;
	for (x = 0; x < 4; ++x) {
		y = x;
	}

	cout << "x = " << x << endl;
	cout << "y = " << y << endl;*/

	/*const double E = 0.0001;
	const double hx = 0.5;
	double a = 4;  //можна створити лічильники в одному рядку, але тільки коли вони одного типу
	const double ha = 1.5;
	for (double x = -2.0; x < 2 + E; x += hx) {

		for (double a = 4; a < 10 + E; a += ha) {

			double y = exp(a) / pow(a, x);
			cout << "a = " << a << "\tx = " << x << "\ty = " << y << "\n";
		}
	}*/

	/*const double E = 0.005;
	double x = 1;
	double s = 0;
	while (1.0 / x > E) { 
		//замість вайл ми можемо написати фор і залишити перший і останній блок пустими
		//так операція буде виконуватись одна й та сама

		cout << "current sum = " << s << endl;
		cout << "current 1/x = " << 1.0/x << endl;

		s += 1.0 / x;
		x += 1;
	}

	cout << "sum = " << s << endl;
	cout << "iteration = " << x << endl;*/

	//sin^x(x)

	double x, y;
	char ch;

	do {
		cout << "input x = ";
		cin >> x;
		y = pow(sin(x), x);
		cout << "result y = "<<y<<endl;
		cout << "continue (y/n)?";
		cin >> ch;
	} while (ch == 'y' || ch == 'Y'); //один символ береться в ''; рядок - в ""

     return 0;
};