#include <stdio.h>

int my_strlen(char* str)
{
	if (*str == '\0')
	{
		return 0;
	}
	else
	{
		return 1 + my_strlen(str + 1);
	}
}

int main()
{
	char a[] = "hello\n\\t\nworld";
	//ģ��ʵ��strlen�����ǲ�����ѭ��
	printf("%d\n", my_strlen(a));

	return 0;
}