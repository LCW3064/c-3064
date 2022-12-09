#include <iostream>
using namespace std;

int big(int a, int b) {

	if (a > 100 || b > 100)
		return 100;
	else
		return a > b ? a : b;
}

int big(int a, int b, int c) {

	if (a > c || b > c)
		return c;
	else
		return a > b ? a : b;

}


int main() {
	int x = big(3, 5);
	int y = big(300, 60);
	int z = big(30, 60, 50);

	cout << x << ' ' << y<< ' ' << z << endl;
	
}
