//strcmp //string compare �ַ����Ƚ�
//��һ�����ڵڶ��� ����ֵ����0
//��һ�����ڵڶ��� ����ֵΪ0
//��һ��С�ڵڶ��� ����ֵС��0
//ǰ��ֵ����ȣ�˭���ַ�������˭��

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