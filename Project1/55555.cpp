#include <iostream>
#include <math.h>
using namespace std;

int main() {
	//сортування масиву бульбашки

    const int n = 10;
    long long mas[n];
    for (int i = 0; i < n; ++i) {
        mas[i] = rand() % 100;
    }

    
    for (int i = 0; i < n; ++i) {
        cout << mas[i] << " ";
    }

    //порівняння всіх сусідів

    for (int k = 0; k < n - 1; ++k) {
        for (int i = 0; i < n - 1; ++i) {
            if (mas[i + 1] < mas[i]) {
                int c = mas[i + 1];
                mas[i + 1] = mas[i];
                mas[i] = c;
            }
        }
    }

    cout << endl;

    for (int i = 0; i < n; ++i) {
        cout << mas[i] << " ";
    }

	return 0;
};