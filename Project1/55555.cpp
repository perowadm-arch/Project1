#include <iostream>
#include <math.h>
using namespace std;

int main(){
	//сортування масиву бульбашки

    const int n = 10;
    long long mas[n];
    for (int i = 0; i < n; ++i) {
        mas[i] = rand() % 100 -50;
    }

    
    for (int i = 0; i < n; ++i) {
        cout << mas[i] << " ";
    }

    //порівняння всіх сусідів

    bool isSorted = false;
    int k = 0;
    while (!isSorted && k < n-1) {  //while not sorted yet
        isSorted = true;
        for (int i = 0; i < n - 1; ++i) {
            if (abs(mas[i + 1]) < abs(mas[i]) ) {
                isSorted = false;
                int c = mas[i + 1];
                mas[i + 1] = mas[i];
                mas[i] = c;
            }
          }
        }
        ++k;

    for (int k = 0; k < n - 1; ++k) {
       
    }

    cout << endl;

    for (int i = 0; i < n; ++i) {
        cout << mas[i] << " ";
    }

	return 0;
};