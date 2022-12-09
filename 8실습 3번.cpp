#include <iostream>
using namespace std;

class Person {
public:
	string job;
	int age;
	virtual void eat() { cout << "���� �� ����" << endl; }
	virtual void talk() { cout << "���� �� ����" << endl; }
	virtual void run() { cout << "���� �� ����" << endl; }
};

class Professor : public Person {
public:
	void teach() { cout << "����ĥ �� ����" << endl << endl; }
	void BasicPrint();
};

void Professor::BasicPrint() {
	cout << "���� ����:" << job << endl;
	cout << "���� ����:" << age << endl;
	run(); talk();
}

class TennisPlayer : public Person {
public:
	void playTennis() { cout << "�״Ͻ� ��⸦ �� �� ����" << endl; }
	void BasicPrint();
};

void TennisPlayer::BasicPrint() {
	cout << "���� ����:" << job << endl;
	cout << "���� ����:" << age << endl;
	run(); talk();
}

int main() {
	Professor teacher;
	teacher.job = "����";
	teacher.age = 39;
	teacher.BasicPrint();
	teacher.teach();

	TennisPlayer player;
	player.job = "�״Ͻ� ����";
	player.age = 23;
	player.BasicPrint();
	player.playTennis();
}