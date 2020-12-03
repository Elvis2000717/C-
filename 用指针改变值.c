#include <stdio.h>

//用指针变量改变值
int main()
{
	int a = 10;
	int* p = &a;
	a = 20;
	printf("%d\n", a);
	*p = 30;
	printf("%d\n", a);

	return 0;
}