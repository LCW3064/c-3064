#include <iostream>
#include <fstream>
using namespace std;
int main() {
	char name[10], dept[20];
	int sid;

	cout << "�̸�>>";
	cin >> name;
	cout << "�й�(���ڷ�)>>";
	cin >> sid;
	cout << "�а�>>";
	cin >> dept;
	
	ofstream fout("C:\\Users\\user\\OneDrive\\���� ȭ��\\����\\C++\\12��\\student.txt");
	if (!fout) {
		cout << "student.txt ������ �� �� ����";
		return 0;
	}

		fout << name << endl;
		fout << sid << endl;
		fout << dept << endl;
		fout.close();
	}