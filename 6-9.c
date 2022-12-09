#include <stdio.h>
int abs2(int);
void main()
{
	int a;
	printf("양 혹은 음의 정수 입력 : ");
	scanf_s("%d", &a);
	printf("%d의 절대값 : %d\n", a, abs2(a));
}
int abs2(int x)
{
	return(x > 0) ? x : -x;
}