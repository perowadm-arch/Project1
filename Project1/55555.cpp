#include <iostream>
#include <math.h>
using namespace std;

int main(){
	//оператори передачі керування

	//break   - switch for while do while
	//goto    - будь де
	//return   - повертає результат із функції
	//continue   - for while do while


	int i = 0;
mitkka1:
	++i;
	cout << "nnnn" << endl;
	if (i<10) goto mitkka1;

	

	cout << "exit" << endl;

	return 0;
};