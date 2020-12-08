#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void multiplicationTable(a)
{
	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d * %d = %d ", i, j, i*j);
		}
		printf("\n");
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	multiplicationTable(n);

	return 0;
}