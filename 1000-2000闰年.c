#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//1000-2000»ÚƒÍ
	int i = 1000;
	for (i; i <= 2000; i++)
	{
		if ((i % 400 == 0) || (i % 4 == 0) && (i % 100 != 0))
		{
			printf("%d  ", i);
		}
	}

	return 0;
}