#include <stdio.h>

int main()
{
	for (int i = 1; i < 100; i++)
	{
		if (i % 10 == 9)
		{
			printf("%d ", i);
			continue;
		}
		if (i / 10 == 9)
		{
			printf("%d ", i);
		}
	}

	return 0;
}