#include <iostream>
#include <string>
using namespace std;

istream& question(istream& ins) {
	cout << "�ſ�� �ſ�� ���� ���� �߻����?";
	return ins;
}

int main() {
	string answer;
	cin >> question >> answer;
	cout << "���󿡼� ���� �߻��� ����� " << answer << "�Դϴ�." << endl;
}