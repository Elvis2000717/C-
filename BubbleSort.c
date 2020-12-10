#include <stdio.h>

void BubbleSort(int *p, int n)
{
	int end = n;
	//µ¥ÌËÃ°ÅÝ
	while (end > 0)
	{
		int i = 1;
		int flag = 0;
		for (i; i < end; i++)
		{
			if (p[i - 1] > p[i])
			{
				int tmp = p[i - 1];
				p[i - 1] = p[i];
				p[i] = tmp;

				flag = 1;
			}
		}
		if (flag == 0)
		{
			break;
		}
		end--;
	}
}

int main()
{
	int a[6] = { 10, 2, 30, 40, 5, 60 };
	int n = sizeof(a) / sizeof(int);
	BubbleSort(a, n);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}

	return 0;
}