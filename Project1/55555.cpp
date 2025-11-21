#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

struct T { //глобальний тип
	int num;
	char name[100];
	T* next;
};

int main() {

	T a, b, c;

	a.num = 1;
	strcpy(a.name, "A");

	b.num = 2;
	strcpy(b.name, "B");

	c.num = 3;
	strcpy(c.name, "C");

	a.next = &b;
	b.next = &c;
	c.next = &a;

	T* pcur = &a;
	cout << pcur->name << " " << pcur->num << endl; //a
	pcur = pcur->next; //b
	cout << pcur->name << " " << pcur->num << endl;
	pcur = pcur->next; //c
	cout << pcur->name << " " << pcur->num << endl;

	cout << "---------------------------" << endl;

	pcur = &a;

	srand(time(NULL));
	int n = rand() % 10;

	for (int i = 0; i < n; i++) {
		pcur = pcur->next;
	}

	cout << pcur->name << " " << pcur->num << endl;

	return 0;
};