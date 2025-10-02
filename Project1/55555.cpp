#include <iostream>
#include <math.h>
using namespace std;

int main(){
	//оператори передачі керування

	//break   - switch for while do while
	//goto    - будь де
	//return   - повертає результат із функції
	//continue   - for while do while


	srand(time(NULL));
	while (true) {  //нескінченний цикл 
		int x = rand() % 100;  //генерація рандомних чисел поки не буде кратне 13
		cout << x << " ";
		if (x % 13 == 0 && x!=0) {
			break;
		}
		
	}
	cout << "exit" << endl;

	return 0;
};