#include <iostream>
using namespace std;

class Weapon {
public:
	virtual void load() = 0;
};

class Bom : public Weapon {
	void load() {
		cout << "��ź�� �����մϴ�." << endl;
	}
};

class Gun : public Weapon {
	void load() {
		cout << "���� �����մϴ�." << endl;
	}
};

int main() {
	Weapon* p = new Gun();
	p->load();

	p = new Bom();
	p->load();
	p->load();

	delete p;
}