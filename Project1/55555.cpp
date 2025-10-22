#include <iostream>
using namespace std;

int main() {
	 
	//квадратна матриця - коли стовпчики = рядки
	//ознака що елемент на головній діагоналі - matr[i][i]

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

	for (int i = 1; i < n-1; i++) {
		for (int k = 1; k < n-1; k++) {
			matr[i][k] = 0;
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