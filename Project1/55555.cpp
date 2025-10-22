#include <iostream>
using namespace std;

int main() {
	 
	//квадратна матриця - коли стовпчики = рядки
	//ознака що елемент на головній діагоналі - matr[i][i]

	const int n = 7;
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

	
	for (int i = 0; i < (n-1)/2; i++) {//зупинка на перетині діагоналей
		for (int k = i+1; k < n-1-i; k++) { //все вище обох діагоналей
			matr[i][k] = 0;
		
		}
	}


	for (int i = 0; i < n; i++) {
		for (int k = 0; k < n; k++) { 
			//matr[i][k] = 0;

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
}