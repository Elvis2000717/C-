char* my_strstr(char* str, char* sub)
{
	while (*str)
	{
		if (*str != *sub)
		{
			str++;
		}
		else
		{
			char* stri = str;
			char* subi = sub;
			while (*subi && *stri == *subi && *stri)
			{
				subi++;
				stri++;
			}

			if (*stri == "\0")
			{
				return NULL;
			}

			if (*subi == '\0')
			{
				return str;
			}
			else
			{
				str++;
			}
		}
	}

	return NULL;
}