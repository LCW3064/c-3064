#include<iostream>
using namespace std;

template<class T>
T getAverage(T a[], int size)
{
	T sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += a[i];
	}
	return sum/size;
}

int main()
{
	double list[] = { 1.2,3.3,9.0,1.5,8.7};
	cout << "Æò±Õ°ª: " << getAverage(list, 5);
}