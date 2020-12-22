#include <stdio.h>
int buy(int* num, int* p)
{
	if (*num % 2 == 0)
	{
		*num = *num / 2;
		*p = *p + *num;
	}
	if (*num % 2 == 1)
	{
		*num = *num / 2;
		*p = *p + *num;
		*num = *num + 1;
	}

	if (*num >= 2)
	{
		buy(num, p);
	}
	else{
		return 0;
	}
}

int main()
{
	int a = 1, money = 20, num = money / a, p = money / a;
	buy(&num, &p);
	printf("%d", p);

	return 0;
}