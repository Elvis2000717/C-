#include <stdio.h>

int main()
{
	int m, n;
	int count = 0;
	int num = 32;
	scanf("%d %d", &m, &n);
	num = m ^ n;
	while (num)
	{
		count++;
		num = num&(num - 1);
	}
	printf("%d\n", count);

	return 0;
}