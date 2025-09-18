#include <iostream>
#include <math.h>
using namespace std;

int main() {

	//МАСИВИ
	//Масив - сукупність однотипних елементів,
	//розташованих в пам'яті одним цілим фрагментом.

	/*int mas1[5];
	double mas2[4] = { 4.5, 5.6, 6.7, 7.8 }; //рахується від нуля
	int mas3[10] = { 5, 77 };
	int mas4[] = { 4, 5, 7, 8 };

	double a = mas2[2];
	cout << a << endl;

	mas2[1] = 100;  //заміна елементу 5.6 на 100

	int mas[5];
	mas[0] = 5;
	mas[1] = -6;
	mas[2] = 4;
	mas[3] = 3;
	mas[4] = 1;

	cout << mas[0] << endl;
	cout << mas[1] << endl;
	cout << mas[2] << endl;
	cout << mas[3] << endl;
	cout << mas[4] << endl;*/

	const int n = 50;
	int mas[n];
	for (int i = 0; i < n; ++i) {
		mas[i] = rand()%100;  //випадкове ціле число, % - ділення по модулю
	  //число буде від нуля до 99
	}

	for (int i = 0; i < n; ++i) {
		cout<<mas[i]<< "  ";
	}


	return 0;
};