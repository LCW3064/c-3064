#include <iostream>
#include <string>
using namespace std;

class Point {
protected:
	int x, y;
public:
	void set(int x, int y) { this->x = x; this->y = y; }
	void showPoint() {
		cout << "(" << x << "," << y << ")" << endl;
	}
};

class ColorPoint : public Point {
	string color;
public:
	void setColor(string color) { this->color = color; }
	void showColorPoint();
	bool equals(ColorPoint p);
};

void ColorPoint::showColorPoint() {
	cout << color << ":";
	showPoint();
}

bool ColorPoint::equals(ColorPoint p) {
	if (x == p.x && y == p.y && color == p.color)
		return true;
	else
		return false;
}

int main() {
	Point p;
	p.set(2, 3);
	p.x = 5; // 3, protected ����� ����� x�� �����ϱ� ������ ������ ������ �߻��Ѵ�.
	p.y = 5; // 4, protected ����� ����� y�� �����ϱ� ������ ������ ������ �߻��Ѵ�.
	p.showPoint();

	ColorPoint cp;
	cp.x = 10; // 5, protected ����� ����� x�� �����ϱ� ������ ������ ������ �߻��Ѵ�.
	cp.y = 10; // 6, protected ����� ����� y�� �����ϱ� ������ ������ ������ �߻��Ѵ�.
	cp.set(3, 4);
	sp.setColor("Red");

	ColorPoint cp2;
	cp2.set(3, 4);
	cp2.setColor("Red");
	cout << ((cp.equals(cp2)) ? "true" : "false");
}