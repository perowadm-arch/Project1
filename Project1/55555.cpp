#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {

	char str[100];
	char str1[100];

	cin >> str; //ц€ ф забере перше слово до проб≥лу,
	//а гетлайн забере залишок з буферу
	cin.getline(str1, 99); //fgets(str,99,stdin);

	cout << str << endl;
	cout << str1 << endl;

	return 0;
};