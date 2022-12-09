#include<iostream>
using namespace std;

template<class T>
T getSmallest(T a[], int size)
{
	T min = 1000000;
	for (int i = 0; i < size; i++)
	{
		if (min > a[i])
			min = a[i];

	}
	return min;
}

int main()
{
	double list[] = { 1.2, 3.3, 9.0, 1.5, 8.7 };
	cout << "ÃÖ¼Ò°ª: " << getSmallest(list, 5);
}