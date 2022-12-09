#include <iostream>
using namespace std;

class Circle;
void swap(Circle& c, Circle& cc);

class Circle {
	int r;
public:
	Circle(int r = 1) { this->r = r; }
	void setRadius(int r) { this->r = r; }
	int getRadius() { return r; }
	double Area() { return r * r * 3.14; }
};

void swap(Circle& c, Circle& cc) {
	int n;

	n = c.getRadius();
	c.setRadius(cc.getRadius());
	cc.setRadius(n);
}

int main() {
	Circle c1(5);
	Circle c2(10);

	cout << "c1 반지름 = " << c1.getRadius() << " 넓이 = " << c1.Area() << endl;
	cout << "c2 반지름 = " << c2.getRadius() << " 넓이 = " << c2.Area() << endl;
	cout << endl <<"<swap 함수 호출 후>" << endl;
	swap(c1, c2);
	cout << "c1 반지름 = " << c1.getRadius() << " 넓이 = " << c1.Area() << endl;
	cout << "c2 반지름 = " << c2.getRadius() << " 넓이 = " << c2.Area() << endl;

}