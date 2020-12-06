#include <stdio.h>

//前置声明
void AddOne(int* pnum);

int main()
{
	int num = 0;
	AddOne(&num);
	printf("%d\n", num);

	return 0;
}

//每调用一次函数加一
void AddOne(int* pnum)
{
	*pnum += 1;
}