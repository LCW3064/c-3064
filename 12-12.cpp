#include <iostream>
#include <fstream>
using namespace std;

long getFileSize(ifstream& fin) {
	fin.seekg(0, ios::end);
	long length = fin.tellg();
	return length;
}

int main() {
	const char*file = "C:\\Users\\user\\OneDrive\\���� ȭ��\\����\\C++\\12��\\system.ini";
	
	ifstream fin(file);
	if (!fin) {
		cout << file << "���� ���� ����" << endl;
		return 0;
	}
	cout << file << "�� ũ��� " << getFileSize(fin);
	fin.close();
}