char* my_strcat(char* str, char* sub)
{
	assert(str != NULL && sub != NULL);
	char* ret = str;
	while (*str != '\0')
	{
		str++;
	}
	while (*str++ = *sub++);
	return ret;
}