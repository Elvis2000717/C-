#include <stdio.h>

size_t my_strlen(const char* str)
{
	const char* tail = str;
	while (*tail++);
	return tail - str - 1;
}
