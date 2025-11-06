#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {

	char str[100];
	
	cin.getline(str, 99); //fgets(str,99,stdin);

	cout << str << endl;

	return 0;
};