#include <iostream>
#include <string>
using namespace std;

int main() {

	cout << "문자열 입력>> ";
	string str;
	getline(cin, str, '\n');

	int n = 0;
	int l = 0;
	while (true) {
		l = str.find('a', l + 1);
		if (l == -1) {
			break;
		}
		else
			n++;
	}

	cout << "문자 a는 " << n << "개 있습니다.";
}