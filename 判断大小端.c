#include <stdio.h>

//��˷���1��С�˷���0��Ҫ����������������
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

//С�˻���λ�ŵ�λ����λ�Ÿ�λ��С�˻�
//��˻���λ�Ÿ�λ����λ�ŵ�λ����˻�
int main()
{
	printf("%d\n", isBigSystem());

	return 0;
}