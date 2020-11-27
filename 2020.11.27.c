#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int max(int a, int b, int c)
//{
//	if (a >= b && a >= c)
//	{
//		if (b >= c)
//		{
//			printf("%d %d %d", a, b, c);
//			return 0;
//		}
//		else
//		{
//			printf("%d %d %d", a, c, b);
//			return 0;
//		}
//	}
//
//	if (b >= a && b >= c)
//	{
//		if (a >= c)
//		{
//			printf("%d %d %d", b, a, c);
//			return 0;
//		}
//		else
//		{
//			printf("%d %d %d", b, c, a);
//			return 0;
//		}
//	}
//
//	if (c >= a && c >= b)
//	{
//		if (a >= b)
//		{
//			printf("%d %d %d", c, a, b);
//			return 0;
//		}
//		else
//		{
//			printf("%d %d %d", c, b, a);
//			return 0;
//		}
//	}
//}

int main()
{
	//100-200素数
	int i = 101;
	for (i; i <= 200; i = i + 2)
	{
		if ((i % 3 != 0) && (i % 5 != 0) && (i % 7 != 0))
		{
			printf("%d ", i);
		}
	}

	//1000-2000闰年
	/*int i = 1000;
	for (i; i <= 2000; i++)
	{
		if ((i % 400 == 0) || (i % 4 == 0) && (i % 100 != 0))
		{
			printf("%d  ", i);
		}
	}*/


	//最大公约数
	/*int a , b , c;
	scanf("%d %d", &a, &b);
	if (b > a)
	{
		c = b;
		b = a;
		a = c;
	}

	for (int i = b; i > 0; i--)
	{
		if (a%i == 0 && b%i == 0)
		{
			printf("%d", i);
			break;
		}
	}*/

	//100以内3的倍数
	/*int a = 100;
	for (int i = 1; i <= a; i++)
	{
		if (i % 3 == 0)
		{
			printf("%d\n", i);
		}
	}*/

	/*int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	max(a,b,c);*/

	/*char* a = 'a';
	printf("%d", sizeof(char* ));*/

	return 0;
}