#include <stdio.h>
int main()
{
	int i, j, n;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = n - i; j>0; j--)
			printf(" ");
		for (j = 0; j<i; j++)
			printf("*", j);
		for (j = 1; j<i; j++)
			printf("*", j);
		printf("\n");
	}
	for (i = n - 1; i>0; i--)
	{
		for (j = n - i; j>0; j--)
			printf(" ");
		for (j = 0; j<i; j++)
			printf("*", j);
		for (j = 1; j<i; j++)
			printf("*", j);
		printf("\n");
	}

	return 0;
}