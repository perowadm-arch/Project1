#include <iostream>

int main() {

	int a = 20;
	std::cout << std::dec << a << std::endl;  //десятична
	std::cout << std::hex << a << std::endl;  //шестирічна
	std::cout << std::oct << a << std::endl;  //восьмирічна

	return 0;
}