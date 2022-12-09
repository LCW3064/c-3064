#include <stdio.h>
void main()
{
	int i, j;
	char M[2][5] = { {'k','o','r','e','a'},{'K','O','R','E','A'} };
	for (i = 0; i <= 1; i++)
	{
		for (j = 0; j <= 4; j++)
			printf("\n a[%d][%d]=%c",i,j, M[i][j]);
	}
}