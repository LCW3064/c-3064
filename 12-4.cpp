#include <iostream>
#include <fstream>
using namespace std;
int main() {

	const char* firstfile = "C:\\Users\\user\\OneDrive\\바탕 화면\\과제\\C++\\12장\\student.txt";
	const char* secondfile = "C:\\Users\\user\\OneDrive\\바탕 화면\\과제\\C++\\12장\\system.ini";
	ifstream fout(firstfile, ios::out | ios::app);
	if (!fout) {
		cout << firstfile << " 열기 오류" << endl;
		return 0;
	}

	ifstream fin(secondfile, ios::in);
	if (!fin) {
		cout << secondfile << " 열기 오류" << endl;
		return 0;
	}
	
	int c;
	while ((c = fin.get()) != EOF) {
		fout.putback(c);
	}

	fin.close();
	fout.close();
}