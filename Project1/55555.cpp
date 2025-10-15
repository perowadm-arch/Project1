#include <iostream>
using namespace std;

int main() {
	 
	//багатовим≥рний масив - матриц€ matr[n] [m]
	//елемент масиву matr[i] [j]

	const int n = 2;
	const int m = 3;
	
	int matr[n][m];

	for (int i = 0; i < n; i++) {
		for (int k = 0; k < m; k++) {
			matr[i][k] = rand() % 20 -10;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int k = 0; k < m; k++) {
			cout << matr[i][k] <<"\t";
		}
		cout << endl;
	}

	int sum = 0;
	int neg = 0;


	for (int i = 0; i < n; i++) {
		for (int k = 0; k < m; k++) {

			sum += matr[i][k];

			if (matr[i][k] < 0) {
				neg++;
			}

		}
	}

	cout << endl << sum << endl;
	cout << endl << neg << endl;

	return 0;
};