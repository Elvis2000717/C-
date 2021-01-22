#include <stdio.h>

char* IntToStr(int value)
{
	//����ȥд��������������⣬���ǻ��Ǵ������ε��ûḲ�ǵ�����
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
	return str;//�����str��һ���ֲ��������������������,���Ըĳ�static
}

int main()
{
	int i = 12345;
	printf("%s", IntToStr(i));

	return 0;
}