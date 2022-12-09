#include <iostream>
#include <string>
using namespace std;

int main() {

	cout << "문자열 입력>> ";
	string str;
	getline(cin, str, '\n');
	
	int n = 0;
	int len = str.length();

	for (int i = 0; i < len; i++) {
		if (str.at(i) == 'a')
			n++;
	}

	cout << "문자 a는 " << n << "개 있습니다.";
}