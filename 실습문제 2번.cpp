#include <iostream>
#include <string>
using namespace std;

int main() {

	cout << "���ڿ� �Է�>> ";
	string str;
	getline(cin, str, '\n');
	
	int n = 0;
	int len = str.length();

	for (int i = 0; i < len; i++) {
		if (str.at(i) == 'a')
			n++;
	}

	cout << "���� a�� " << n << "�� �ֽ��ϴ�.";
}