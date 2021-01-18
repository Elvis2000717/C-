char* my_strcpy(char* dst, const char* src)
{
	const ret = dst;
	while (*src)
	{
		*dst = *src;
		dst++;
		src++;
	}

	*dst = '\0';

	return ret;
}