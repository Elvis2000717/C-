#include <stdio.h>

int find(int** a,int n,int size)
{
	int left = 0;
	int right = size - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (a[mid] == n)
		{
			return 1;
		}
		else if (a[mid] > n)
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}
	return 0;
}

int main()
{
	int a[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 8, 9, 10 } };
	int n = 8;
	if (find(a, n, sizeof(a) / sizeof(int)))
	{
		printf("找到了\n");
	}
	else
	{
		printf("没找到\n");
	}

	return 0;
}