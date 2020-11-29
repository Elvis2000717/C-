#include <stdio.h>
#include <time.h>
int main()
{
	int a[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	srand(time(0));
	int x = rand() % 10;
	int left = 0;
	int right = 9;
	int mid;

	printf("%d\n", x);

	while (left <= right)
	{
		mid = (left + right) / 2;

		if (a[mid] == x)
		{
			printf("找到了 %d", mid);
			return mid;
		}
		else if (a[mid] > x)
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}
	printf("找不到");

	return 0;
}