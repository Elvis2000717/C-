#include <stdio.h>
int jugeSystem()
{
	int val = 1;
	char ch = val;//隐式类型转换，大给小的->截断
	//小的给大的->提升
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
		printf("小端");
	}
	else
	{
		printf("大端");
	}

	return 0;
}