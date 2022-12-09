#include <iostream>
#include <string>
using namespace std;

template <class T>
class myStack {
	int tos;
	T data[100];
public:
	myStack();
	void push(T element);
	T pop();
};

template <class T>
myStack<T>::myStack() {
	tos = -1;
}

template <class T>
void myStack<T>::push(T element) {
	if (tos == 99) {
		cout << "stack full";
		return;
	}
	tos++;
	data[tos] = element;
}

template <class T>
T myStack<T>::pop() {
	T retData;
	if (tos == -1) {
		cout << "stack empty";
		return 0;
	}
	retData = data[tos--];
	return retData;
}

class Point {
	int x, y;
public:
	Point(int x = 0, int y = 0) { this->x = x; this->y = y; }
	void show() { cout << '(' << x << ',' << y << ')' << endl; }
};

int main() {
	myStack <int*> ipStack;
	int* p = new int[3];
	for (int i = 0; i < 3; i++)p[i]= i * 10;
	ipStack.push(p);
	int* q = ipStack.pop();
	for (int i = 0; i < 3; i++)cout << q[i] << ' ';
	cout << endl;
	delete[]p;

	myStack<Point> pointStack;
	Point a(2, 3), b;
	pointStack.push(a);
	b = pointStack.pop();
	b.show();

	myStack<Point*> pStack;
	pStack.push(new Point(10, 20));
	Point* pPoint = pStack.pop();
	pPoint->show();

	myStack<string>stringStack;
	string s = "c++";
	stringStack.push(s);
	stringStack.push("java");
	cout << stringStack.pop() << ' ';
	cout << stringStack.pop() << endl;
}