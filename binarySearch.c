#include <stdio.h>

int binarySearch(int* a, int n, int x)
{
	int left = 0, right = x;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (a[mid] == n)
		{
			return mid;
		}
		if (a[mid] > n)
		{
			right = mid - 1;
		}
		if (a[mid] < n)
		{
			left = mid + 1;
		}
	}
	return -1;
}

int main()
{
	int a[] = { 1, 4, 7, 9, 10 };
	int x = sizeof(a) / sizeof(int);
	int n;
	int mid;
	scanf("%d", &n);
	if (binarySearch(a, n, x) == -1)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了!\n");
	}

	return 0;
}