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

	cout << endl;

	for (int i = 0; i < n; i++) {
		cout << matr[i][0] << " " << &matr[i][0] << " " << matr[i] << " " << *matr[i] << endl;
	}//адреси кожного елементу стовпц€

	cout << endl << matr[1] + 2 << " " << *(matr[1] + 2) << " " << matr[1][2] << " " << & matr[1][2] << endl;

	// matr[i][k] <==> *(matr[i] + k) <==> *(*(matr + i) + k) - формула екв≥валентност≥

	return 0;
};