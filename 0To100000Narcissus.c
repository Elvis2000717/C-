#include <stdio.h>
#include <math.h>
int main()
{
	//1.��ǰ�����λ��
	//2.�Ե�ǰ�����ÿһλ����n�η������Ұ�ÿ�����ּ���Ľ�����
	//3.�Ƚ�

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