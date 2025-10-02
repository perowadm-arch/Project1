#include <iostream>
#include <math.h>
using namespace std;

int main(){
	//оператори передачі керування

	//break   - switch for while do while
	//goto    - будь де
	//return   - повертає результат із функції
	//continue   - for while do while

	bool err1 = false;
	bool err2 = true;
	bool err3 = false;

	cout << "processing 1" << endl;
	if (err1) {
		goto myend;
	}

	cout << "processing 2" << endl;
	if (err2) {
		goto myend;
	}

	cout << "processing 3" << endl;
	if (err3) {
		goto myend;
	}

	cout << "processing 4" << endl;
	goto exit_program;


myend:
	cout << "error" << endl;
	exit_program:
	cout << "exit" << endl;

	return 0;
};