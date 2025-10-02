#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int mas[5] = { 10, 20, 3, 4, 5 };

	for (int i = 0; i < 5; i++) {
		cout << mas[i] << " " << endl;
	}

	cout << mas << endl;  //мас це вже адреса елемента

	int* pmas;
	pmas = mas;
	cout << pmas << endl;

	*pmas = 111;

	for (int i = 0; i < 5; i++) {
		cout << mas[i] << " " << endl;
	}

	pmas =&mas[3];
*pmas = 555;

for (int i = 0; i < 5; i++) {
	cout << mas[i] << " " << endl;
}

	return 0;
};