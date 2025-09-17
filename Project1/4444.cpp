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

	//÷» Ћ» for, while, do while.

	//один прох≥д циклу - ≥терац≥€


	//const double E = 0.0001;  //0.0001 - точн≥сть, р≥зн≥ зм≥нн≥ можуть показувати з р≥зною точн≥ст
	//for (double x = -2.0;  x < 2.0 + E; x+=0.2) 
	//	cout<< x << endl;
    //cout << "exit" << endl;

	//р≥зн≥ зм≥нн≥ збер≥гають числа в р≥зн≥й "величин≥" (б≥льше,менше цифр п≥сл€ коми)

	/*int x = 0, y = 0;
	for (x = 0; x < 4; ++x) {
		y = x;
	}

	cout << "x = " << x << endl;
	cout << "y = " << y << endl;*/

	const double E = 0.0001;
	const double hx = 0.5;
	double a = 4;  //можна створити л≥чильники в одному р€дку, але т≥льки коли вони одного типу
	const double ha = 1.5;
	for (double x = -2.0 /*a = 4*/; x < 2 + E; x += hx) {

		double y = exp(a) / pow(a, x);
		cout <<"a = " <<a<< "\tx = " <<x<< "\ty = " <<y<< "\n";
		a += hx;
	}



	return 0;
};