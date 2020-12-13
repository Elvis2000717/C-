#include <stdio.h>
int main()
{
	int i = 10;
	int j = ++i;
	printf("%d,%d\n", i, j);// 11 11

	int x = 10;
	int y = x++;
	printf("%d,%d\n", x, y);// 11 10

	return 0;
}