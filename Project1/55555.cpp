#include <iostream>
#include <math.h>
using namespace std;

int main() {
	unsigned int a = 5;
	unsigned int b = 10;
	cout << a << " " << b << endl;

	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	//a = a + b; 
	//b = a - b;
	//a = a - b;
	
	//int c = a;
	//a = b;
	//b = c;
	cout << a << " " << b << endl;

	// ми пом≥н€ли м≥сц€ми значенн€, використовуючи с €к пусту чашку
	return 0;
};