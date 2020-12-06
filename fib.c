#include <stdio.h>

int fib1(int n)
{
	if (n < 2)
	{
		return n;
	}
	return fib1(n - 1) + fib1(n - 2);
}

int fib2(int n)
{
	int f0 = 0, f1 = 1, f2 = n;
	int i = 2;
	while (i <= n)
	{
		f2 = f1 + f0;
		f0 = f1;
		f1 = f2;
		i++;
	}
	return f2;
}

int main()
{
	int s = 10;
	printf("%d\n", fib1(s));
	printf("%d\n", fib2(s));
	
	return 0;
}