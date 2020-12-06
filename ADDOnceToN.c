#include <stdio.h>

int ADDOnceToN(int n)
{
	if (n == 1)
	{
		return 1;
	}
	return ADDOnceToN(n - 1) + n;
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n", ADDOnceToN(n));
}