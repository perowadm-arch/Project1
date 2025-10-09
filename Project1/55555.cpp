#include <iostream>
#include <math.h>
using namespace std;

int main() {
	//посиоання reference
	// тип & назва = ініціалізація;
	// референс - "друге ім'я" (константний показчик)
	// *p <==> ra
	// const тип & назва = ініціалізація;

	int a = 90;
	int& ra = a; // <==> int* const pra = &a;
	cout << ra << endl;
	cout << a << endl;
	ra = 100;
	cout << ra << endl;
	cout << a << endl;
	int* const pra = &a;
	*pra = 123;
	cout << ra << endl;
	cout << a << endl;
	cout << *pra << endl;

	const int& ra2 = a;
	// ra2 = 77; заборонено

	return 0;
};