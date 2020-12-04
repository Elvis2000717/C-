#include <stdio.h>

void exchage(int* a, int* b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main()
{
	int x, y;
	scanf("%d %d", &x, &y);
	exchage(&x, &y);
	printf("%d %d\n", x, y);

	return 0;
}