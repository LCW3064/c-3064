#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
	int num[20];

	ifstream fin;
	fin.open("C:\\Users\\user\\OneDrive\\���� ȭ��\\����\\C++\\12��\\sample.txt");
	if (!fin) {
		cout << "sample.txt ������ �� �� ����";
		return 0;
	}

	for (int i = 0; i < 10; i++)
		fin >> num[i];

	int sum = 0;

	for (int i = 0; i < 10; i++)
		sum += num[i];

	cout << "���� " << sum << endl;
	
	fin.close();
}