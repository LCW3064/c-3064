#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream fin("C:\\Users\\user\\OneDrive\\바탕 화면\\과제\\C++\\12장\\system.ini");
	if (!fin) {
		cout << "C:\\Users\\user\\OneDrive\\바탕 화면\\과제\\C++\\12장\\system.ini 열기 실패" << endl;
		return 0;
	}

	char buf[81];
	while (fin.getline(buf, 81)) {
		cout << buf << endl;
	}

	fin.close();
}