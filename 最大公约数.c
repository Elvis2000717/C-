#include <stdio.h>

int main()
{
	int a = 28;
	int b = 77;
	int c;
	while(1)
	{
		c = a % b;
		if (c == 0)
		{
			break;
		}
		else
		{
			a = b;
			b = c;
		}
	}

	printf("%d\n", b);

	return 0;
}