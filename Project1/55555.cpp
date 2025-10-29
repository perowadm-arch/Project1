#include <iostream>

using namespace std;

int main() {

	int n;
	int m;
	do {
		cout << "enter n>0: " << endl;
		cin >> n;

	
		cout << "enter m>0: " << endl;
		cin >> m;

	} while (n <= 0 || m <= 0);

		if (n <= 0 || m <= 0) {
			cout << "invalid input" << endl;
			return 1;
		}

		double** matr;
		matr = new double* [n];
		//int** matr = new int* [n];

		for (int i = 0; i < n; i++) {
			matr[i] = new double[m];
		}
		
	//створення динамічного масиву показчиків для зберігання двохвимірної матриці

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				matr[i][j] = rand() % 10000 / 100.0;
			}
		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cout<< matr[i][j] << "\t";
			}
			cout << endl;
		}

		//сортування стовпчика

		int index = 4;
		for (int index = 0; index < m; index++) {
			
			for (int k = 0; k < n - 1; k++) {
				for (int i = 0; i < n - 1 - k; i++) {
					if (matr[i + 1][index] < matr[i][index]) {
						double c = matr[i + 1][index];
						matr[i + 1][index] = matr[i][index];
						matr[i][index] = c;
					}
				}
			}
		}

		cout << endl << endl;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cout << matr[i][j] << "\t";
			}
			cout << endl;
		}



		for (int i = 0; i < n; ++i) {
			delete[]matr[i];
		}

		delete[]matr;



	return 0;
};