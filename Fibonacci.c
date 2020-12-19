#include <stdio.h>
int func(int n)
{
	if (n < 3)
	{
		return 1;
	}
	return func(n - 1) + func(n - 2);
}

int main()
{
	printf("%d", func(5));
}