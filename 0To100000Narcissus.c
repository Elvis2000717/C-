#include <stdio.h>
#include <math.h>
int main()
{
	//1.求当前数组的位数
	//2.对当前数组的每一位进行n次方，并且把每次数字计算的结果相加
	//3.比较

	for (int i = 0; i <= 100000; i++)
	{
		int count = 0;
		int tmp = i;
		while (tmp)
		{
			count++;
			tmp /= 10;
		}

		tmp = i;
		int total = 0;
		while (tmp)
		{
			total += pow(tmp % 10, count);
			tmp /= 10;
		}

		if (total == i)
		{
			printf("%d\n", total);
		}
	}

	return 0;
}