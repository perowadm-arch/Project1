#include <iostream>
#include <math.h>

int main() {
    std::cout << "X=";
    double x;
    std::cin >> x;
    double y;

    if (x<0) {
        y = sin(x);
        std::cout << "sin" << std::endl;
    }
    else {
        y = cos(x);
        std::cout << "cos" << std::endl;
    }
   
    std::cout << y << "\n";

    std::cin.get();
    return 0;
}