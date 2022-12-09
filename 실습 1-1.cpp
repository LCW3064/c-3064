#include <iostream>
#include <string>
using namespace std;

class Person {
	int id;
	double weight;
	string name;
public:
	void show() { cout << id << ' ' << weight << ' ' << name << endl; }
	Person() {
		this->id = 1;
		this->weight = 20.5;
		this->name = "Grace";
	}
	Person(int id, string name) { this->id = id; weight = 20.5; this->name = name; }
	Person(int id, string name, double weight) {
		this->id = id;
		this->weight = weight;
		this->name = name;
	}
};

int main() {
	Person grace, ashley(2, "Ashley"), helen(3, "Helen", 32.5);
	grace.show();
	ashley.show();
	helen.show();
}