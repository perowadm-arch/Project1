#include <iostream>
using namespace std;

int main() {
	 
	//квадратна матриця - коли стовпчики = рядки
	//ознака що елемент на головній діагоналі - matr[i][i]

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

	//int c = 0; 
	
	for (int i = 0; i < n-1; i++) {
		for (int k = 0; k < n-1-i; k++) { //вище побічної діагоналі
			//matr[i][k] = 0;
		
			//if (matr[i][k] % 2 != 0) {
			//	++c;
			//}
		}
	}


	for (int i = 1; i < n; i++) {
		for (int k = n-i; k < n; k++) { //нижче побічної діагоналі
			matr[i][k] = 0;

		}
	}

	//cout << endl << c << endl;
	
	//int min = 1; //пошук мінімального елемента
	//for (int i = 1; i < n; i++) {
	//	for (int k = 0; k < i; k++) { //все під головною діагоналлю
	//		//matr[i][k] = 1;

	//		if (matr[i][k] < min) {
	//			min = matr[i][k];
	//		}
	//	}
	//}

	cout << endl;


	for (int i = 0; i < n; i++) {
		for (int k = 0; k < n; k++) {
			cout << matr[i][k] << "\t";
		}
		cout << endl;
	}

	//cout << endl << min;


	return 0;
}