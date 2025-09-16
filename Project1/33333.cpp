#include <iostream>
//#include <stdio.h>

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
return 0;
}; */

int main() {

	int a = 3;
	int b = 4;
	
	if (a == b) {
		//== - лперація порівняння. = - присвоїти.
		std::cout << "YESYESYESYES" << std::endl;
	}
else {
		std::cout << "NONONONONO" << std::endl;
	};

	return 0;
};