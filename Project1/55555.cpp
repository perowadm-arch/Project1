#include <iostream>
#include <math.h>
using namespace std;

int main() {
	const int n = 5;
	int mas[n] = { 5, 3, 7, 2, 4 };

	for (int i = 0; i < n; i++) {
		cout << mas[i] << "  " << endl;
	}
	cout << endl;

	int* pmin = mas; // &mas[0];
	int* pmax = mas;

	for (int i = 1; i < n; i++) {
		if (mas[i] < *pmin) {
			pmin = &mas[i]; // OR mas + i

		}

		if (mas[i] > *pmax) {
			pmax = &mas[i]; // OR mas + i

		}
	};

	cout << *pmin << " " << *pmax << endl;

	int c = *pmin;
	*pmin = *pmax;
	*pmax = c;
	//ми пом≥н€ли максимум ≥ м≥н≥мум м≥сц€ми

	cout << endl;

	for (int i = 0; i < n; i++) {
		cout << mas[i] << "  " << endl;
	}
	cout << endl;

	return 0;
};