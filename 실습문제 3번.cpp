#include <iostream>
#include <string>
using namespace std;

int main() {

	cout << "���ڿ� �Է�>> ";
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

	cout << "���� a�� " << n << "�� �ֽ��ϴ�.";
}