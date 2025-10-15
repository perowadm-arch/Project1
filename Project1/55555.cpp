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

	cout << endl;

	for (int i = 0; i < n; i++) {
		int min = matr[i][0];
		
		for (int k = 0; k < m; k++) {
			if (matr[i][k] < min) {
				min = matr[i][k];
			}
		}
		cout << min << "\t";
	}



	return 0;
};