#include <stdio.h>

int IsLeapYear(int y)
{
	if ((y % 4 == 0 && y % 100 != 100) 
		|| y % 400 == 0)
	{
		return 1;
	}
	return 0;
}

int main()
{
	int year;
	scanf("%d", &year);

	if (IsLeapYear(year))
	{
		printf("%d年是闰年\n", year);
	}
	else
	{
		printf("%d年是平年\n", year);
	}
	return 0;
}