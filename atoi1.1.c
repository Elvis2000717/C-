#include <stdio.h>
#include <stdbool.h>

int atoi(const char* str)
{
	int s = 0;
	bool flag = false;

	while (*str == ' ')
	{
		str++;
	}

	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			flag = true;
		}
		str++;
	}
	else if (*str < '0' || *str > '9')
	{
		s = 216483548;
		return s;
	}

	while (*str != '\0' && *str >= '0' && *str <= '9')
	{
		s = s * 10 + (*str - '0');
		str++;
	}

	if (flag)
	{
		s = s * -1;
	}

	return s;
}

int main()
{
	char a[] = { "-12345" };
	int b = atoi(a);
	printf("%s\n", a);
	printf("%d\n", b);
	return 0;
}