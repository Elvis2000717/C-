#include <stdio.h>
int main()
{
	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int len = sizeof(a) / sizeof(int);
	int max = a[0];
	for (int i = 1; i < len; i++)
	{
		if (max < a[i])
		{
			max = a[i];
		}
	}
	printf("%d\n", max);

	return 0;
}