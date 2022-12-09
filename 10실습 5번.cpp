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
		cout << "단어 추가 : 1, 단어 테스트 : 2, 종료 : 3" << endl;
		cout << "=================================================" << endl;
		cout << "하나를 선택하세요 : ";
		cin >> n;

		switch (n){
		case 1:
			cout << "추가할 단어 : ";
			cin >> name;
			cout << "추가할 의미 : ";
			cin >> mean;
			m.insert(make_pair(name, mean));
			break;

		case 2:
			cout << "단어를 입력하시오 : ";
			cin >> name;
			if (m.find(name) == m.end())
				cout << name << "은(는) 없습니다." << endl;
			else
				cout << name << "의 의미는 " << m[name] << endl;
			break;

		case 3:
			return 0;

		default:
			cout << "잘못 입력하셨습니다." << endl;
		}
	}
}