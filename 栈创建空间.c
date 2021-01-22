#include <stdio.h>

char* IntToStr(int value)
{
	//这样去写，解决了销毁问题，但是还是存在两次调用会覆盖的问题
	static char str[11];
	int i = 0;
	while (value)
	{
		int num = value % 10;
		str[i++] = '0' + num;
		value /= 10;
	}

	int begin = 0, end = i - 1;
	while (begin < end)
	{
		char tmp = str[begin];
		str[begin] = str[end];
		str[end] = tmp;

		begin++;
		end--;
	}

	str[i] = '\0';
	return str;//这里的str是一个局部变量，返回是有问题的,可以改成static
}

int main()
{
	int i = 12345;
	printf("%s", IntToStr(i));

	return 0;
}