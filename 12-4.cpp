#include <iostream>
#include <fstream>
using namespace std;
int main() {

	const char* firstfile = "C:\\Users\\user\\OneDrive\\���� ȭ��\\����\\C++\\12��\\student.txt";
	const char* secondfile = "C:\\Users\\user\\OneDrive\\���� ȭ��\\����\\C++\\12��\\system.ini";
	ifstream fout(firstfile, ios::out | ios::app);
	if (!fout) {
		cout << firstfile << " ���� ����" << endl;
		return 0;
	}

	ifstream fin(secondfile, ios::in);
	if (!fin) {
		cout << secondfile << " ���� ����" << endl;
		return 0;
	}
	
	int c;
	while ((c = fin.get()) != EOF) {
		fout.putback(c);
	}

	fin.close();
	fout.close();
}