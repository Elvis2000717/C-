#include <stdio.h>

//ǰ������
void AddOne(int* pnum);

int main()
{
	int num = 0;
	AddOne(&num);
	printf("%d\n", num);

	return 0;
}

//ÿ����һ�κ�����һ
void AddOne(int* pnum)
{
	*pnum += 1;
}