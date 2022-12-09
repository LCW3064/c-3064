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
	cout << "�����ϰ� �ִ� ���� ���� = " << Circle::getNumOfCircles() << endl;

	

	delete[] p;
	cout << "�����ϰ� �ִ� ���� ���� = " << Circle::getNumOfCircles() << endl;

	Circle a;
	cout << "�����ϰ� �ִ� ���� ���� = " << Circle::getNumOfCircles() << endl;

	cout << "a�� ����"<<a.getArea() << endl;

	Circle b;
	cout << "�����ϰ� �ִ� ���� ���� = " << Circle::getNumOfCircles() << endl;
}