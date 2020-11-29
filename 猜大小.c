#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int num;
	int x = rand() % 10;
	printf("0-9猜一个数字：");
	scanf("%d", &num);
	while (1)
	{
		if (num > x)
		{
			printf("猜大了\n");
		}
		else if (num < x)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜中了\n");
			break;
		}
		scanf("%d", &num);
	}

	return 0;
}