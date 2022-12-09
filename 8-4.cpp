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
	x.a = 5; // 1, a�� Derived Ŭ������ ��ӵ�����, private ����̹Ƿ� ���ٺҰ��ϴ�
	x.setA(10); // 2, setA()�� private ����� ����Ǿ� Derived Ŭ������ ��ӵǱ� ������ Derived  Ŭ���� �ܺο��� ���ٺҰ��ϴ�.
	x.showA(); // 3, showA()�� private ����� ����Ǿ� Derived Ŭ������ ��ӵǱ� ������ Derived  Ŭ���� �ܺο��� ���ٺҰ��ϴ�.
	x.b = 10; // 4, b�� private ����̱� ������ Derived Ŭ���� �ܺο��� ���� �Ұ����ϴ�.
	x.setB(10); // 5, setB�� protected ����̱� ������ main()���� ���� �Ұ����ϴ�.
	x.showB();
}