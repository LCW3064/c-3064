#include <stdio.h>
int abs2(int);
void main()
{
	int a;
	printf("�� Ȥ�� ���� ���� �Է� : ");
	scanf_s("%d", &a);
	printf("%d�� ���밪 : %d\n", a, abs2(a));
}
int abs2(int x)
{
	return(x > 0) ? x : -x;
}