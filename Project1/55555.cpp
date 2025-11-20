
#include <iostream>

using namespace std;

int main() {

	struct Tpoint2 {
		int x;
		int y;
	}p1,p2 = {10, 30};

	struct Tpoint {
		char pib[30];
		int bal;
	}ivan = { "Ivanov", 90};

	Tpoint dasha = { "Perova" , 78 };

	Tpoint maxim;

	maxim.bal = 90;
	strcpy(maxim.pib, "Andreev");

	return 0;
};