#include <iostream>
using namespace std;

int main() {
	 
	//квадратна матриц€ - коли стовпчики = р€дки
	//ознака що елемент на головн≥й д≥агонал≥ - matr[i][i]

	const int n = 5;
	int matr[n][n];

	for (int i = 0; i < n; i++) {
		for (int k = 0; k < n; k++) {
			matr[i][k] = rand() % 200 - 100+1;
		}
	}


	for (int i = 0; i < n; i++) {
		for (int k = 0; k < n; k++) {
			cout << matr[i][k] << "\t";
		}
		cout << endl;
	}

	for (int i = 0; i < n; i++) {
		for (int k = i; k < n; k++) { //все разом з головною д≥агоналлю
			matr[i][k] = 0;
		}
	}
	
	for (int i = 1; i < n; i++) {
		for (int k = 0; k < i; k++) { //все п≥д головною д≥агоналлю
			matr[i][k] = 1;
		}
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