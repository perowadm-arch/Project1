#include <iostream>
using namespace std;

int main() {
	 
	//квадратна матриця - коли стовпчики = рядки
	//ознака що елемент на головній діагоналі - matr[i][i]

	const int n = 5;
	int matr[n][n];

	for (int i = 0; i < n; i++) {
		for (int k = 0; k < n; k++) {
			matr[i][k] = rand() % 200 - 100;
		}
	}


	for (int i = 0; i < n; i++) {
		for (int k = 0; k < n; k++) {
			cout << matr[i][k] << "\t";
		}
		cout << endl;
	}

	cout << endl << endl;


	for (int i = 0; i < n; i++) {
		//for (int k = 0; k < n; k++) {
		//	if (i == k) {
		//		cout << matr[i][k] << "\t";
		//	}
		//} - дуже багато необов'язкових перевірок

		cout << matr[i][n-i-1] << "\t"; //побіічна діагональ
	}

	cout << endl;

	for (int i = 0; i < n; i++) {
		cout << matr[i][i] << "\t";
	}


	for (int k = 0; k < n - 1; ++k) //повторення порівнання усіх сусідів
		for (int i = 0; i < n - 1 - k; ++i)//процедура порівняння усіх сусідів
		{
			if (abs(matr[i + 1][i + 1]) < abs(matr[i][i]))
			{//перестановка елементів за правилом трьох стаканів
				int c = matr[i + 1][i + 1];
				matr[i + 1][i + 1] = matr[i][i];
				matr[i][i] = c;
			}
		}
	

	cout << endl << endl;

	for (int i = 0; i < n; i++) {
		for (int k = 0; k < n; k++) {
			cout << matr[i][k] << "\t";
		}
		cout << endl;
	}


	return 0;
};