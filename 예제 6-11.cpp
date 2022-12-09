#include <iostream>
using namespace std;

class Circle {
private:
	static int numOfCircle;
	int radius;
public:
	Circle(int r = 1);
	~Circle() { numOfCircle--; }
	double getArea() { return 3.14 * radius * radius; }
	static int getNumOfCircles() { return numOfCircle; }
};

Circle::Circle(int r) {
	radius = r;
	numOfCircle++;
}

int Circle::numOfCircle = 0;

int main() {
	Circle* p = new Circle[10];
	cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << endl;

	

	delete[] p;
	cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << endl;

	Circle a;
	cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << endl;

	cout << "a의 넓이"<<a.getArea() << endl;

	Circle b;
	cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << endl;
}