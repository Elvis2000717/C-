#include <stdio.h>

int main()
{
	int a = 100;
	for (int i = 1; i <= a; i++)
	{
		if (i % 3 == 0)
		{
			printf("%d\n", i);
		}
	}

	return 0;
}