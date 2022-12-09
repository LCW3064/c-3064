#include <stdio.h>
void deco(int);
void main()
{
	int i;
	for (i = 1; i < 6; i++)
		deco(i);
}
void deco(int x)
{
	int i;
	for (i = 0; i < x; i++)
		putchar('*');
	putchar('\n');
}