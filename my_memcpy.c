#include <stdio.h>

void* my_memcpy(void* dest, const void*  src, size_t count)
{
	char* my_dest = (char*)dest;
	const char* my_src = (char*)src;

	for (int i = 0; i < count; i++)
	{
		my_dest[i] = my_src[i];
	}
}

int main()
{
	int str1[10] = { 1, 2, 3, 4, 5 };
	int str2[10] = { 0 };
	my_memcpy(str2, str1, 20);
	for (int i = 0; i < sizeof(str2) / sizeof(int); i++)
	{
		printf("%d", str2[i]);
	}

	return 0;
}