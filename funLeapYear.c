#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void isLeapYear(y)
{
	if (y % 400 == 0 || (y % 4 == 0) && (y % 100 != 0))
	{
		printf("%d������\n", y);
	}
	else
	{
		printf("%d��������\n", y);
	}
}

int main()
{
	int year;
	printf("�������ж��������ݣ�\n");
	scanf("%d", &year);
	isLeapYear(year);

	return 0;
}