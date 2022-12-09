#include<iostream>
using namespace std;

template<class T>
T getSmallest(T a[], int size)
{
	T min = 0;
	for (int i = 0; i < size; i++)
	{
		if (min > a[i])
			min = a[i];

	}
	return max1;
}

int main()
{
	int x[] = { 1,10,100,4,5 };
	cout << getSmallest(x, 5);
}



