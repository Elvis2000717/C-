#include <stdio.h>

//计算2进制下有几个1
int CountBitNum(int x)
{
	int count = 0;
	//while (x)
	//{
	//	x &= (x - 1);
	//	count++;
	//}
	for (int i = 0; i < 32; i++)
	{
		if (x & 1)
		{
			count++;
		}
		x >>= 1;
	}
	return count;
}

int main()
{
	printf("%d\n", CountBitNum(1));
	printf("%d\n", CountBitNum(0x7FFFFFFF));
	return 0;
}