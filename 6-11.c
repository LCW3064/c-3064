#include <stdio.h>

void func1(int a)
{
	a++;
	printf("���޹��� a==>%d\n", a);
}

void main()
{
	int a = 10;


	func1(a);
	printf("func1() ���� ���� a==>%d\n", a);
}