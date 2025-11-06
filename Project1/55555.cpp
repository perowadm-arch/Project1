#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {

	char str[] = "Help me please";
	
	cout << str << endl;
	str[7] = 0;
	cout << str << endl;
	cout << str[8] << endl;
	cout << &str[8] << endl; // & - ג³העגמנ‏÷ גסו ן³סכÿ צüמדמ סטלגמכף

	return 0;
};