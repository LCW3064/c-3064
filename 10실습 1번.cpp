#include<iostream>
using namespace std;

template<class T1, class T2>
bool equalArray(T1 x[], T2 y[], int a) {
	for (int i = 0; i < a; i++) {
		if (x[i] != y[i])
			return false;
	}
	return true;
}
int main() {
	int x[] = { 1, 10, 100, 5, 4 };
	int y[] = { 1, 10, 100, 5, 4 };
	double a[] = { 0.1,2.3,3.5 };
	double b[] = { 5.3, -2.1, 12.5 };
	if (equalArray(x, y, 5)) cout << "같다" << endl;
	else cout << "다르다" << endl;
	if (equalArray(a, b, 3)) cout << "같다" << endl;
	else cout << "다르다" << endl;
}
