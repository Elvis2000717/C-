#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void isLeapYear(y)
{
	if (y % 400 == 0 || (y % 4 == 0) && (y % 100 != 0))
	{
		printf("%d是闰年\n", y);
	}
	else
	{
		printf("%d不是闰年\n", y);
	}
}

int main()
{
	int year;
	printf("请输入判断闰年的年份：\n");
	scanf("%d", &year);
	isLeapYear(year);

	return 0;
}