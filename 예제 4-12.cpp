#include <iostream>
#include <string>
using namespace std;

int main() {
	string name[5];

	for (int i = 0; i < 5; i++) {
		cout << "�̸� >> ";
		getline(cin,name[i],'\0') >> name[i];
	}

	string latter = name[0];
	for (int i = 1; i < 5; i++) {
		if (latter < name[i]) {
			latter = name[i];
		}
	}
	cout << "�������� ���� �ڿ� ������ ���ڿ��� " << latter << endl;
}