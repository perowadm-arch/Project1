#include <iostream>
using namespace std;

int main() {
	 
	//квадратна матриц€ - коли стовпчики = р€дки
	//ознака що елемент на головн≥й д≥агонал≥ - matr[i][i]

	const int n = 7;
	int matr[n][n];

	for (int i = 0; i < n; i++) {
		for (int k = 0; k < n; k++) {
			matr[i][k] = rand() % 200 - 100;
		}
	}


	for (int i = 0; i < n; i++) {
		for (int k = 0; k < n; k++) {
			cout << matr[i][k] << "\t";
		}
		cout << endl;
	}

	cout << endl << endl;


	for (int i = 0; i < n; i++) {
		//for (int k = 0; k < n; k++) {
		//	if (i == k) {
		//		cout << matr[i][k] << "\t";
		//	}
		//} - дуже багато необов'€зкових перев≥рок

		cout << matr[i][i] << "\t";
	}

	int* pmin = &matr[0][0];
	int* pmax = &matr[0][0];

	for (int i = 0; i < n; ++i) {
		if (matr[i][i] < *pmin) pmin = &matr[i][i];
		if (matr[i][i] > *pmax) pmax = &matr[i][i];
	}

	cout << endl << *pmin << "\t" << *pmax << endl;
	cout << "index min = " << pmin - matr[0] << endl;
	cout << "index max = " << pmax - matr[0] << endl;

	return 0;
};