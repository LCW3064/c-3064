#include <iostream>
using namespace std;

class Person {
	string job;
	int age;
public:
	void eat() { cout << "먹을 수 있음" << endl; }
	void talk() { cout << " 말할 수 있음" << endl; }
	void run() { cout << "걸을 수 있음" << endl; }
};

class Professor : public Person {
public:
	void BasicPrint() { void eat(); void talk(); void run(); }
};

int main() {
	Professor teacher;
	teacher.BasicPrint();
}