#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {

	char ch = 65;
	printf("%c\n", ch);
	printf("%d\n", ch);

	cout << ch << endl;
	cout << (int)ch << endl;

	cout << endl;

	//друкування повної таблиці ANSCII
	for (int c = 0; c <= 255; ++c){
			unsigned char ch = c;
			printf("Code: %d\t Value: %c\n", ch, ch);
	}

	return 0;
};