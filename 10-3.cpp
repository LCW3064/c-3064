#include <iostream>
using namespace std;

template <class T>
T add(T data[], int b) {
	T sum = 0;
	for (int i = 0; i < b; i++) {
		sum += data[i];
	}
	return sum;
}

int main() {
	int x[5] = { 1,2,3,4,5 };
	double d[6] = { 1.2, 2.3, 3.4, 4.5, 5.6, 6.7 };

	cout << "sum of x[] = " << add(x, 5) << endl;
	cout << "sum of d[] = " << add(d, 6) << endl;
}