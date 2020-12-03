#include <stdio.h>2

void swap(int* px, int* py)
{
	int tmp = *px;
	*px = *py;
	*py = tmp;
}

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	//使用冒泡的思想，把最大的交换到c上
	if (a > b)
	{
		swap(&a, &b);
	}

	if (b > c)
	{
		swap(&b, &c);
	}

	//把最小的放到a上
	if (a > b)
	{
		swap(&a, &b);
	}

	printf("%d %d %d ", a, b, c);

	return 0;
}