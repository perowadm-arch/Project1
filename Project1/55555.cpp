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

	int c = 0; 
	for (int i = 0; i < n-1; i++) {
		for (int k = i+1; k < n; k++) { //к-≥сть neпарних елем вище головноњ д≥аг
			//matr[i][k] = 0;
			if (matr[i][k] % 2 != 0) {
				++c;
			}
		}
	}

	cout << endl << c << endl;
	
	int min = 1; //пошук м≥н≥мального елемента
	for (int i = 1; i < n; i++) {
		for (int k = 0; k < i; k++) { //все п≥д головною д≥агоналлю
			//matr[i][k] = 1;

			if (matr[i][k] < min) {
				min = matr[i][k];
			}
		}
	}

	cout << endl;


	for (int i = 0; i < n; i++) {
		for (int k = 0; k < n; k++) {
			cout << matr[i][k] << "\t";
		}
		cout << endl;
	}

	cout << endl << min;


	return 0;
}