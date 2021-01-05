#include <stdio.h>

size_t my_strlen(const char* str)
{
	const char* tail = str;
	while (*tail)
	{
		tail++;
	}
	return tail - str;
}
