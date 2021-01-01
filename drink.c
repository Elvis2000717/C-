#include <stdio.h>

//ºÈÆûË®
int main()
{
	int money = 20;
	int total = money;
	int empty = money;

	while (empty > 1)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}

	printf("%d\n", total);

	return 0;
}