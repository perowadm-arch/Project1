#include <iostream>
#include <math.h>
using namespace std;

int main() {

	//МАСИВИ
	//Масив - сукупність однотипних елементів,
	//розташованих в пам'яті одним цілим фрагментом.

	//int mas1[5];
	double mas2[4] = { 4.5, 5.6, 6.7, 7.8 }; //рахується від нуля
	/*int mas3[10] = { 5, 77 };
	int mas4[] = { 4, 5, 7, 8 };*/

	double a = mas2[2];
	cout << a << endl;

	mas2[1] = 100;  //заміна елементу 5.6 на 100

	return 0;
};