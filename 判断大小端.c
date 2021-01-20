#include <stdio.h>

//大端返回1，小端返回0，要求借用联合体的特性
union Data
{
	int i;
	char ch;
};

int isBigSystem()
{
	union Data d;
	//d.i = 0x00000001;
	d.i = 1;

	if (d.ch == 1)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

//小端机低位放低位，高位放高位，小端机
//大端机低位放高位，高位放低位，大端机
int main()
{
	printf("%d\n", isBigSystem());

	return 0;
}