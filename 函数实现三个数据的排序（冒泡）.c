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

	//ʹ��ð�ݵ�˼�룬�����Ľ�����c��
	if (a > b)
	{
		swap(&a, &b);
	}

	if (b > c)
	{
		swap(&b, &c);
	}

	//����С�ķŵ�a��
	if (a > b)
	{
		swap(&a, &b);
	}

	printf("%d %d %d ", a, b, c);

	return 0;
}