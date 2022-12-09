#include <iostream>
#include <fstream>
using namespace std;

long getFileSize(ifstream& fin) {
	fin.seekg(0, ios::end);
	long length = fin.tellg();
	return length;
}

int main() {
	const char*file = "C:\\Users\\user\\OneDrive\\바탕 화면\\과제\\C++\\12장\\system.ini";
	
	ifstream fin(file);
	if (!fin) {
		cout << file << "파일 열기 오류" << endl;
		return 0;
	}
	cout << file << "의 크기는 " << getFileSize(fin);
	fin.close();
}