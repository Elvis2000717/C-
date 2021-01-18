#include <stdio.h>

int Rotate(char* a, char* b)
{
	int len = strlen(a);
	for (int i = 0; i < len; i++)
	{
		int tmp = a[0];
		for (int j = 0; j < len - 1; j++)
		{
			a[j] = a[j + 1];
		}
		a[len - 1] = tmp;

		//ÅÐ¶ÏÊÇ·ñÏàµÈ
		if (!strcmp(a,b))
		{
			return 1;
		}
	}

	return 0;
}

int main()
{
	char str1[] = "abcde";
	char str2[] = "abcdf";
	char str3[] = "eabcd";

	if (Rotate(str1, str3))
	{
		printf("1\n");
	}
	else
	{
		printf("0\n");
	}

	return 0;
}