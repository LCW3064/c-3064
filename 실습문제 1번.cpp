#include <iostream>
using namespace std;

int main() {
	int* p = new int[5];
	double avg = 0;
	cout << "정수 5개 입력 >>";
	for (int i = 0; i < 5; i++) {
		cin >> p[i];
		avg += p[i];
	}
	cout << "평균" << (avg / 5);
	delete[]p;
}