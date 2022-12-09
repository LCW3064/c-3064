#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

class NamedCircle : public Circle {
	string name;
public:
	NamedCircle(int r, string n) { setRadius(r); this->name = n; }
	void setName(string s) { this->name = s; }
	string getName() { return this->name; }
	void show();
};

void NamedCircle::show() {
	cout << "�������� " << getRadius() << "�� " << getName() << endl;
}

int main() {
	NamedCircle waffle(3, "waffle");
	waffle.show();
}