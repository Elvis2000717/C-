#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isPrimeNumber(int n)
{
	if (n <= 1)
	{
		return 3;
	}
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}

	return 1;
}

int main()
{
	int num;
	scanf("%d", &num);
	if (isPrimeNumber(num) == 1)
	{
		printf("%d������\n", num);
	}
	if (isPrimeNumber(num) == 0)
	{
		printf("%d��������\n", num);
	}
	if (isPrimeNumber(num) == 3)
	{
		printf("���������������������룡\n");
	}


	return 0;
}