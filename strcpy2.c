char* my_strcpy(char* dst, const char* src)
{
	const ret = dst;
	//先赋值，再判断，只要不是\0，代码就继续
	while (*dst++ = *src++);

	return ret;
}