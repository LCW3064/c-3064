#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
	int num[20];

	ifstream fin;
	fin.open("C:\\Users\\user\\OneDrive\\바탕 화면\\과제\\C++\\12장\\sample.txt");
	if (!fin) {
		cout << "sample.txt 파일을 열 수 없다";
		return 0;
	}

	for (int i = 0; i < 10; i++)
		fin >> num[i];

	int sum = 0;

	for (int i = 0; i < 10; i++)
		sum += num[i];

	cout << "합은 " << sum << endl;
	
	fin.close();
}