#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream fin("C:\\Users\\user\\OneDrive\\���� ȭ��\\����\\C++\\12��\\system.ini");
	if (!fin) {
		cout << "C:\\Users\\user\\OneDrive\\���� ȭ��\\����\\C++\\12��\\system.ini ���� ����" << endl;
		return 0;
	}

	char buf[81];
	while (fin.getline(buf, 81)) {
		cout << buf << endl;
	}

	fin.close();
}