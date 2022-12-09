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
	void showB() {
		setA(5);
		showA();
		cout << b;
	}
};

class GrandDerived : private Derived {
	int c;
protected:
	void setAB(int x) {
		setA(x); // 3, setA()는 private 속성으로 변경되어 Derived 클래스에 상속되기 때문에 GrandDerived 클래스에서 접근불가
		showA(); // 4, showA()는 private 속성으로 변경되어 Derived 클래스에 상속되기 때문에 GrandDerived 클래스에서 접근불가
		setB(x);
	}
};
