#include <stdio.h>

void* my_memmove(void* dest, const void* src, size_t count)
{
	char* my_dest = (char*)dest;
	const char* my_src = (const char*)src;

	if (my_dest > my_src && my_dest < my_src + count)
	{
		for (int i = count - 1; i >= 0; i--)
		{
			my_dest[i] = my_src[i];
		}
	}
	else
	{
		for (int i = 0; i < count; i++)
		{
			my_dest[i] = my_src[i];
		}
	}
}

int main()
{
	int str[10] = { 1, 2, 3, 4, 5 };
	my_memmove(str + 3, str , 20);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", str[i]);
	}

	return 0;
}