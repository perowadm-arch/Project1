#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {

	char str[] = "Michael, don't leave me here!";
	
	cout << str << endl;
	str[7] = 0;
	cout << str << endl;
	cout << str[9] << endl;
	cout << &str[9] << endl; // & - ג³העגמנ‏÷ גסו ן³סכÿ צüמדמ סטלגמכף
	cout << str + 9 << endl;

	return 0;
};