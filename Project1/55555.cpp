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
			cin >> matr[i][k];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int k = 0; k < m; k++) {
			cout << matr[i][k] <<" ";
		}
		cout << endl;
	}



	return 0;
};