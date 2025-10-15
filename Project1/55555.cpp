#include <iostream>
using namespace std;

int main() {
	 
	//багатовим≥рний масив - матриц€ matr[n] [m]
	//елемент масиву matr[i] [j]

	const int n = 7;
	const int m = 10;
	
	int matr[n][m];

	for (int i = 0; i < n; i++) {
		for (int k = 0; k < m; k++) {
			matr[i][k] = rand() % 200 -100;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int k = 0; k < m; k++) {
			cout << matr[i][k] <<"\t";
		}
		cout << endl;
	}



	return 0;
};