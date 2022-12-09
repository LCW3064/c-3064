#include <stdio.h>
void main()
{
	int n = 0;
	char str[4];
	str[0] = 'A';
	str[1] = 'B';
	str[2] = 'C';
	str[3] = 'D';

	while (n < 4)
	{
		putchar(str[n]);
		printf("\n");
		n++;
	}
}