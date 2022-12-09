#include <iostream>
using namespace std;

class Base {
public:
	virtual void f() { cout << "Base::f() called" << endl; }
};

class Derived : public Base {
public:
	virtual void f() { cout << "Dervied::f() called" << endl; }
};

class GrandDerived : public Derived {
public:
	virtual void f() { cout << "GrandDervied::f() called" << endl; }
};

void main() {
	GrandDerived g;
	Base* bp;
	Derived* dp;
	GrandDerived* gp;
	bp = dp = gp = &g;

	bp->f();
	dp->f();
	gp->f();
}