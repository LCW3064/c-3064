#include <iostream>
#include <string>
using namespace std;

class Book {
	string x, y, z;
public:
	Book(string x = "", string y = "", string z = "") {
		this->x = x;
		this->y = y;
		this->z = z;
	}
	friend istream& operator>>(istream& ins, Book& a);
	friend ostream& operator<<(ostream& ins, Book a);
};

istream& operator >> (istream& ins, Book& a) {
	cout << "책 저자>>";
	ins >> a.x;
	cout << "책 출판사>>";
	ins >> a.y;
	cout << "책 가격>>";
	ins >> a.z;
	return ins;
}

ostream& operator << (ostream& stream, Book a) {
	stream << "(" << a.x << "," << a.y << "," << a.z << ")";
	return stream;
}

int main() {
	Book p;
	cin >> p;
	cout << p;
}