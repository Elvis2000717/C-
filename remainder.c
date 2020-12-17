#include <stdio.h>
int main()
{
	int a = 7, b = -8, c = 3, d = -3;

	//正数模正数
	printf("%d\n", a%c);//1
	//a - (a / b) * b
	//7 - (7 / 3) * 3

	//正数模负数
	printf("%d\n", a%d);//1
	//7 - (7 / -3) *-3

	//负数模正数
	printf("%d\n", b%c);//-2
	//-8 - (-8 / 3) * 3

	//负数模负数
	printf("%d\n", b%d);//-2
	//-8 - (-8 / -3) * -3

	return 0;
}