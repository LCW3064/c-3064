#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	map<string, string> m;
	string name, mean;
	int n;

	while (true) {
		cout << "=================================================" << endl;
		cout << "�ܾ� �߰� : 1, �ܾ� �׽�Ʈ : 2, ���� : 3" << endl;
		cout << "=================================================" << endl;
		cout << "�ϳ��� �����ϼ��� : ";
		cin >> n;

		switch (n){
		case 1:
			cout << "�߰��� �ܾ� : ";
			cin >> name;
			cout << "�߰��� �ǹ� : ";
			cin >> mean;
			m.insert(make_pair(name, mean));
			break;

		case 2:
			cout << "�ܾ �Է��Ͻÿ� : ";
			cin >> name;
			if (m.find(name) == m.end())
				cout << name << "��(��) �����ϴ�." << endl;
			else
				cout << name << "�� �ǹ̴� " << m[name] << endl;
			break;

		case 3:
			return 0;

		default:
			cout << "�߸� �Է��ϼ̽��ϴ�." << endl;
		}
	}
}