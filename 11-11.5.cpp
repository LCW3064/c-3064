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
	cout << "å ����>>";
	ins >> a.x;
	cout << "å ���ǻ�>>";
	ins >> a.y;
	cout << "å ����>>";
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