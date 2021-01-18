//strcmp //string compare 字符串比较
//第一个大于第二个 返回值大于0
//第一个等于第二个 返回值为0
//第一个小于第二个 返回值小于0
//前面值都相等，谁的字符串长，谁大

int my_strcmp(const char* str1, const char* str2)
{
	while (*str1 && *str2)
	{
		if (*str1 > *str2)
		{
			return 1;
		}
		else if (*str1 < *str2)
		{
			return - 1;
		}
		else
		{
			str1++;
			str2++;
		}
	}

	if (*str1)
	{
		return 1;
	}
	else if (*str2)
	{
		return -1;
	}
	return 0;
}