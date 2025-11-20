
#include <iostream>

using namespace std;

struct Tpoint2 { //глобальний тип
	int x;
	int y;
};

int main() {

	

	Tpoint2 p1 = { 32, 5 };

	struct Tpoint {  //локальний тип
		char pib[30];
		int bal;
	}ivan = { "Ivanov", 90};

	Tpoint dasha = { "Perova" , 78 };

	Tpoint bogdan;

	bogdan.bal = 90;
	strcpy(bogdan.pib, "Andreev");

	return 0;
};