#include <iostream>
#include <math.h>
using namespace std;

int main(){
	//оператори передачі керування

	//break   - switch for while do while
	//goto    - будь де
	//return   - повертає результат із функції
	//continue   - for while do while

	bool isexit = false;

	for (int i = 1; i < 5; i++){
		for (int j = 1; j < 5; j++) {
			for (int k = 1; k < 5; k++) {
				int x = rand() % 100;

				cout << x << endl;
				cout << i << " " << j << " " << k << endl;

				if (x %13 == 0 && x != 0) {
					cout << "Break" << endl;
					isexit = true;
					break;
				}
			}
			if (isexit) {
				break;
			}
		}
		if (isexit) {
			break;
		}
	}

	return 0;
};