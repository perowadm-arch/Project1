#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int a = 7;
	int b = 1;
	int c = 4;
	int mas[3] = { 5, 77, 2 };

	int* pmas[6]; //"записна книжка" - записує адреси всіх елементів
	pmas[0] = &a;
	pmas[1] = &b;
	pmas[2] = &c;
	pmas[3] = mas;
	pmas[4] = mas + 1;
	pmas[5] = &mas[2];

	for (int i = 0; i < 6; i++) {
		cout << *pmas[i] << " ";
	}

	cout << endl;

	for (int i = 0; i < 6; i++) {
		*pmas[i] += 100;
	}
	cout << a << " " << b << " " << c << endl;

	for (int i = 0; i < 3; i++) {
		cout << mas[i] << " ";
	}


	return 0;
};