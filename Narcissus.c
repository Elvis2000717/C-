#include <stdio.h>

int getnum(int n)
{
	int count = 1;
	while (n / 10)
	{
		count++;
		n = n / 10;
	}

	return count;
}

int main()
{
	int i = 153;
	int a, b, c;
	int n, num = 0;
	n = getnum(i);

	if (getnum(i) == 3)
	{
		a = i % 10;
		b = i / 10 % 10;
		c = i / 10 / 10 % 10;
	}
	if (a^n + b^n + c^n == i)
	{
		printf("%d yes", i);
	}

	return 0;
}