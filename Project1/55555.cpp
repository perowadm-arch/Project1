#include <iostream>

using namespace std;

int main() {

	int n;
	int m;
	int w;
	do {
		cout << "enter n>0: " << endl;
		cin >> n;

		cout << "enter m>0: " << endl;
		cin >> m;

		cout << "enter w>0: " << endl;
		cin >> w;

	} while (n <= 0 || m <= 0 || w <= 0);



		//друга схема

		double*** matr;
		matr = new double** [n];
		//int** matr = new int* [n];


		for (int i = 0; i < n; ++i) {
			matr[i] = new double*[m];
			for (int k = 0; k < m; ++k) {
				matr[i][k] = new double[w];
			}
		}
		
	//створення динамічного масиву показчиків для зберігання двохвимірної матриці

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				for (int k = 0; k < w; ++k) {
					matr[i][j][k] = rand() % 10000 / 100.0;
				}
			}
		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				for (int k = 0; k < w; ++k) {
					cout << matr[i][j][k] << "\t";
				}
				cout << endl;
			}
			cout << endl;
		}

		//сортування стовпчика

		int index2 = 2;

		for (int index = 0; index < m; index++) {
			
			for (int k = 0; k < n - 1; k++) {
				for (int i = 0; i < n - 1 - k; i++) {
					if (matr[i + 1][index][index2] < matr[i][index][index2]) {
						double c = matr[i + 1][index][index2];
						matr[i + 1][index][index2] = matr[i][index][index2];
						matr[i][index][index2] = c;
					}
				}
			}
		}

		cout << endl << endl;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				for (int k = 0; k < w; ++k) {
					cout << matr[i][j][k] << "\t";
				}
				cout << endl;
			}
			cout << endl;
		}



		
	
		

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				delete []matr[i][j];
			}
			delete []matr[i];
		}

		delete[]matr;



	return 0;
};