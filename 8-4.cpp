#include <iostream>
using namespace std;

class Base {
	int a;
protected:
	void setA(int a) { this->a = a; }
public:
	void showA() { cout << a; }
};

class Derived : private Base {
	int b;
protected:
	void setB(int b) { this->b = b; }
public:
	void showB() { cout << b; }
};

int main() {
	Derived x;
	x.a = 5; // 1, a는 Derived 클래스에 상속되지만, private 멤버이므로 접근불가하다
	x.setA(10); // 2, setA()는 private 멤버로 변경되어 Derived 클래스에 상속되기 때문에 Derived  클래스 외부에서 접근불가하다.
	x.showA(); // 3, showA()는 private 멤버로 변경되어 Derived 클래스에 상속되기 때문에 Derived  클래스 외부에서 접근불가하다.
	x.b = 10; // 4, b는 private 멤버이기 때문에 Derived 클래스 외부에서 접근 불가능하다.
	x.setB(10); // 5, setB는 protected 멤버이기 때문에 main()에서 접근 불가능하다.
	x.showB();
}