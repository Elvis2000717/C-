#include <stdio.h>

//ËØÊıµÄÅĞ¶Ï
int IsPrimeNum(int num)
{
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			return 0;
		}
	}

	return 1;
}

int main()
{
	for (int i = 1; i < 100; i++)
	{
		if (IsPrimeNum(i))
		{
			printf("%d ", i);
		}
	}

	printf("\n");
	return 0;
}