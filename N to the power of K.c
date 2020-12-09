#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void my_power(int a, int b, int* sum)
{
	if (b >= 2)
	{
		my_power(a, b - 1, sum);
	}
	*sum = (*sum) * a;
}

int main()
{
	int n, k;
	int sum = 1;
	scanf("%d %d", &n, &k);
	my_power(n, k, &sum);
	printf("%d\n", sum);

	return 0;
}