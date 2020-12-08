#include <stdio.h>

//µİ¹é
int strlen1(char* a)
{
	if (*a == '\0')
	{
		return 0;
	}
	return 1 + strlen1(a + 1);
}

//·Çµİ¹é
int strlen2(char* a, int* i)
{
	while (*a != '\0')
	{
		a = a + 1;
		(*i)++;
	}
	return *i;
}

int main()
{
	int i = 0;
	char str[] = "student";
	printf("%d\n", strlen1(str));
	printf("%d\n", strlen2(str,&i));

	return 0;
}