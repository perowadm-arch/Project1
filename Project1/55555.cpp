#include <iostream>
using namespace std;

int main() {

	const int n = 4;
	const int m = 5;
	int matr[n][m];

	for (int i = 0; i < n; i++) {
		for (int k = 0; k < m; k++) {
			matr[i][k] = rand() % 200 - 100 + 1;
		}
	}


	for (int i = 0; i < n; i++) {
		for (int k = 0; k < m; k++) {
			cout << matr[i][k] << "\t";
		}
		cout << endl;
	}


	return 0;
};