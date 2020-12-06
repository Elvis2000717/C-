#include <stdio.h>

void print(int num)
{
	if (num == 0)
	{
		return;
	}
	printf("%d\n", num % 10);

	print(num / 10);
}

int main()
{
	int x = 4321;
	print(x);
	return 0;
}