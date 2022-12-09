#include <iostream>
#include <fstream>
using namespace std;
int main() {

	ifstream fin;
	fin.open("C:\\Users\\user\\OneDrive\\바탕 화면\\과제\\C++\\12장\\student.txt");
	if (!fin) {
		cout << "파일을 열 수 없다";
		return 0;
	}
	char name[10], dept[20];
	int sid;

	fin >> name;
	fin >> sid;
	fin >> dept;

	cout << name << endl;
	cout << sid << endl;
	cout << dept << endl;
	fin.close();
}