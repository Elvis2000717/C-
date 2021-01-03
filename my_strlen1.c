#include <stdio.h>

size_t my_strlen(const char* str)
{
	size_t len = 0;
	while (*str)//*str != '\0'
	{
		len++;
		str++;
	}
	return len;
}