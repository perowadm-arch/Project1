#include <iostream>
using namespace std;

int main() {

	// void* malloc(size_t size) виділення динамічної пам'яті
	// size_t - unsigned int; size - к-ість пам'яті в байтах;
	 
	// void* calloc(size_t num, size_t size) - виділ. динамічної пам'яті
	// num - к-ість блоків; size - розмір блоку у байтах;
	 
	// void* realloc(void* ptr, size_t size) - перевиділення динам пам'яті
	// ptr - показчик на попередню виділену пам'ять; size - розмір блоку в байтах
	 
	// unsigned int - число без знаків (тобто без -)

	// void free(void* ptr); ptr - показчик, який зберігає адресу виділеної динам пам'яті

	//ТИП* prt1 = new ТИП;
	//ТИП* prt2 = new ТИП(значення);
	//ТИП* mas = new ТИП[кількість елементів];
	//виділення динамічної пам’яті

	//delete ptr1;
	//delete[]mas;
	//звільнення динамічної пам’яті

	//ТИП* ІМЯ = (ТИП*)malloc(sizeof(ТИП)*n);
	//free(ІМЯ);

	double* b = (double*)malloc(sizeof(double));

	*b = 2.6;
	cout << *b << endl;

	free(b);








	return 0;
};