#include <iostream>
using namespace std;

int main() {
	 
	//квадратна матриц€ - коли стовпчики = р€дки
	//ознака що елемент на головн≥й д≥агонал≥ - matr[i][i]

	const int n = 5;
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

		cout << matr[i][n-i-1] << "\t"; //поб≥≥чна д≥агональ
	}

	cout << endl;

	for (int i = 0; i < n; i++) {
		cout << matr[i][i] << "\t";
	}


	for (int index = 0; index < n; index++) {
		int c = matr[index][index];
		matr[index][index] = matr[index][n - 1 - index];
		matr[index][n - 1 - index] = c;
	}
	

	cout << endl << endl;

	for (int i = 0; i < n; i++) {
		for (int k = 0; k < n; k++) {
			cout << matr[i][k] << "\t";
		}
		cout << endl;
	}


	return 0;
};