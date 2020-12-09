#include <stdio.h>

int sum = 0;
int DigitSum(n)
{
	if (n / 10 != 0)
	{
		DigitSum(n / 10);
	}
	n = n % 10;
	sum = sum + n;
	printf("%d ", n);
}

int main()
{
	int num;
	scanf("%d", &num);
	DigitSum(num);
	printf("\n");
	printf("%d\n", sum);

	return 0;
}