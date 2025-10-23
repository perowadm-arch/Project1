#include <iostream>
using namespace std;

int main() {

	const int n = 4;
	const int m = 5;
	const int k = 6;
	int mas3d[n][m][k];

	//for (int i = 0; i < n; i++) {
	//	for (int k = 0; k < m; k++) {
	//		matr[i][k] = rand() % 200 - 100 + 1;
	//	}
	//}


	//for (int i = 0; i < n; i++) {
	//	for (int k = 0; k < m; k++) {
	//		cout << matr[i][k] << "\t";
	//	}
	//	cout << endl;
	//}

	//cout << endl;

	//int* mas;

	//mas = &matr[0][0];  //matr[0]

	//for (int i = 0; i < n * m; i++) {
	//	cout << mas[i] << " ";
	//}

	//cout << endl << endl;

	//for (int i = 0; i < n; i++) {
	//	for (int k = 0; k < m; k++) {
	//		cout << mas[i*m+k] << "\t";
	//	}
	//	cout << endl;
	//}

	for (int i = 0; i < n; i++) {
		for (int ii = 0; ii < m; ii++) {
			for (int iii = 0; iii < k; iii++) {
				mas3d[i][ii][iii] = rand() % 201 - 100 + 1;
			}
		}
	}

	for (int i = 0; i < n; i++, cout << endl) {
		for (int ii = 0; ii < m; ii++, cout << endl) {
			for (int iii = 0; iii < k; iii++) {
				cout << mas3d[i][ii][iii] << " ";
			}
		}
	}


	return 0;
};