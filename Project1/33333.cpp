#include <iostream>
//#include <stdio.h>
#include <math.h>
using namespace std;

/* int main() {

	int a = 20;  //20 - десятична; 0х20 - шестирічна; 020 - восьмирічна;
	std::cout << std::dec << a << std::endl;  //десятична 
	std::cout << std::hex << a << std::endl;  //шестирічна 
	//поділити на 16. 20/16 - остача 4, останнє число; 4(остача)/16 - остача 1, перше число.
	std::cout << std::oct << a << std::endl;  //восьмирічна
	//поділити на 8. 20/8 - осача 4, 4/8 - остача 2.

	//short int - 2 байти. long int - 4 байти. long long - 8 байт.
	//bool - 1 байт. тру чи фолс/0 або 1. істина - будь яке ненульове число, похибка - 0.

	bool b = true; //будь яке число він запише як 1, бо це тру
	bool d = false;
	std::cout << b << std::endl;
	std::cout << d << std::endl;

	char с = 65; //якщо сіаут чар, то він йде шукати символи на чар
//чар складається з символів. 65 - А
	std::cout << с << std::endl;
	
	//printf( format: "%c\n", c);
	//printf( format: "%d\n", c); із мови С. перший покаже символами, другий числом.

	//int8 - char; int16 - short; int64 - long long; int32 - long;
}; */

/*int main() {

	int a = 3;
	int b = 4;
	
	if (a == b) {
		//== - лперація порівняння. = - присвоїти. != - не дорівнює.
		std::cout << "YESYESYESYES" << std::endl;
	}
else {
		std::cout << "NONONONONO" << std::endl;
	};

	int c = a && b;
  //переведе все в істину/не істину. 3 - істина - 1. 4 - істина - 1.
	std::cout << c << std::endl;

	int d = a & b;
	//3 - 0110; 4 - 0101;
	//0*2^0 + 1*2^1 + 1*2^2 + 0*2^3 = 3. формула переведення з двоїчного коду.
	//сумма a*p^n де а - значення з кінця (1 чи 0),
	// р - тип (в нас двоїчний, отже 2), n - номер позиції, рахуємо від нуля.
	std::cout << d << std::endl;

	int e = a | b; //операція або. якщо ||, то результат 1 або 0.

	std::cout << e << std::endl;

	unsigned int f = 10;

	int g = f >> 1;  //зсув вправо, також швидке ділення на 2 (якщо 1), якщо 2 - швидке ділення без остачі.
	std::cout << g << std::endl;

	int h = 4;
	int i = 5;

	if (h == i) {
		std::cout << h << i << std::endl;
		std::cout << h << i << std::endl;
	};
	};*/

int main() {
	//cout << 1.0 / 2 << endl; //якщо писати цілі числа, то і результат дійсний
	//якщо ж одне з них зробити дійсним - рез збільшується до дійсного

	double x, a;
	cout << "enter number a: ";
	cin >> a;
	cout << "enter number x: ";
	cin >> x;

	double y; 
	if (a > 0 && x > 0) {

		y = exp(pow(x, a));

	}
	else {

		y = pow(x, exp(a));

	};
	 
	cout << "y =" << y << endl;

	return 0;
};