#include <stdio.h>

int main()
{
	int n = 10;
	int a[10][10];
	for (int i = 0; i < 10; i++)
	{
		a[i][0] = 1;
		a[i][i] = 1;
	}

	for (int i = 2; i < 10; i++)
	{
		for (int j = 1; j < i; j++)
		{
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}