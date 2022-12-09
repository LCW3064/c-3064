#include <iostream>
using namespace std;

class HomeApplication {
protected:
	int price;
public:
	int getPrice(int price) { this->price = price; }
	virtual void show() = 0;
};

class Tv : public HomeApplication {
public:
	int getPrice(int price) { return this->price = 0.9 * price; }
	void show() { cout << "�ڷ����� ����: " << price << endl; }
};

class Refrigerator : public HomeApplication {
public:
	int getPrice(int price) { return this->price = 0.95 * price; }
	void show() { cout << "����� ����: " << price << endl; }
};

int main() {
	Tv tv;
	tv.getPrice(100000);
	tv.show();

	Refrigerator Rf;
	Rf.getPrice(200000);
	Rf.show();

	tv.getPrice(300000);
	tv.show();
}