#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main() {

	char str[] = "Michael, don't leave me here!";
	
	int len = 0;

	for (int i = 0; str[i] != '\0'; i++) {
		++len;
	}

	cout << len << endl;

	len = strlen(str);

	cout << len << endl;

	return 0;
};