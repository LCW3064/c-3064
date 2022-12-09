#include <iostream>
#include <fstream>
using namespace std;

void reverseReadFile(ifstream& fin) {
	fin.seekg(0, ios::end);
	int length = fin.tellg();
	for (int i = 0; i < length; i++) {
		fin.seekg(length - 1 - i, ios::beg);
		cout << (char)fin.get();
	}
}

int main() {
	const char* file = "C:\\Users\\user\\OneDrive\\���� ȭ��\\����\\C++\\12��\\sample.txt";

	ifstream fin(file);
	if (!fin) {
		cout << file << "���� ����" << endl;
		return 0;
	}
	reverseReadFile(fin);
	fin.close();
}