#include <stdio.h>
int jugeSystem()
{
	int val = 1;
	char ch = val;//��ʽ����ת�������С��->�ض�
	//С�ĸ����->����
	if (ch == 0x01)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	if (jugeSystem())
	{
		printf("С��");
	}
	else
	{
		printf("���");
	}

	return 0;
}