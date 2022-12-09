#include <stdio.h>
void deco();
void main()
{
	int a, b;
	a = 10, b = 20;

	deco();
	printf("%d+%d=%d\n", a, b, a + b);
	deco();
}
void deco()
{
	printf("*************\n");
}