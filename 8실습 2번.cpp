#include <iostream>
using namespace std;

class Person {
	string job;
	int age;
public:
	void eat() { cout << "���� �� ����" << endl; }
	void talk() { cout << " ���� �� ����" << endl; }
	void run() { cout << "���� �� ����" << endl; }
};

class Professor : public Person {
public:
	void BasicPrint() { void eat(); void talk(); void run(); }
};

int main() {
	Professor teacher;
	teacher.BasicPrint();
}