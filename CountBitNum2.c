//判断二进制1的个数
#include <stdio.h>

int main()
{
	int num = -1;
	int i = 0;
	int count = 0;
	while (num)
	{
		count++;
		num = num &(num - 1);
	}
	printf("二进制中1的个数=%d\n", count);
	return 0;
}