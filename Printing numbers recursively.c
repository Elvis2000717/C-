#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void fun(int a)
{
	int b;
	while (a / 10 != 0)
	{
		b = a % 10;
		printf("%d ", b);
		a = a / 10;
	}
	printf("%d\n", a);
}

int main()
{
	int sum;
	scanf("%d", &sum);
	fun(sum);

	return 0;
}