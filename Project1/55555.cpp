#include <iostream>
#include <math.h>
using namespace std;

int main(){
	//оператори передачі керування

	//break   - switch for while do while
	//goto    - будь де
	//return   - повертає результат із функції
	//continue   - for while do while

	for (int i = 1; i <= 10; i++ ) {
		
		if (i % 3 == 0) {
			break;
		}
		cout << i << " ";
	}
	cout << "exit" << endl;

	return 0;
};