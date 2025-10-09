#include <iostream>
#include <math.h>
using namespace std;

int main() {
	//операції з адресами
	// адреса + число = адреса. виконується відповідно до розміру типу
	// адреса - число = адреса.
	// адреса - адреса = число. показує зміщення між адресами

	//адреса + адреса - не існує

	int a = 8;
	int* ptr = &a;
	cout << ptr << endl;
	cout << &a << endl;
	cout << ptr + 1 << endl;
	cout << ptr + 2 << endl;
	cout << ptr - 1 << endl;
	cout << ptr - 2 << endl;


	cout << "  " << endl;

	double b = 8;
	double* pth = &b;
	cout << pth << endl;
	cout << &b << endl;
	cout << pth + 1 << endl;

	cout << "  " << endl;

	double d = 8;
	double* ptb = &d;
	cout << ptb << endl;
	cout << &d << endl;
	cout << ptb + 1 << endl;
	cout << ptb + 2 << endl;
	cout << ptb - 3 << endl;


	return 0;
};