#include <iostream>
#include <fstream>
using namespace std;
int main() {
	int num[10] = { 0,1,2,3,4,5,6,7,8,9 };

	ofstream fout("C:\\Users\\user\\OneDrive\\바탕 화면\\과제\\C++\\12장\\sample.txt");
	if (!fout) {
		cout << "sample.txt 파일을 열 수 없다";
		return 0;
	}
	for (int i = 0; i < 10; i++)
		fout << num[i] << ' ';

	
	fout.close();
}