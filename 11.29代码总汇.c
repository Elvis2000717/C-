#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>

//int main()
//{
//	//f9 打断点 f5 直接运行到断点处，再f10和f11再走
//	//跳出循环 break
//	/*int i = 0;
//	scanf("%d", &i);
//	while (i < 10)
//	{
//		if (i == 5)
//		{
//			break;
//		}
//		printf("%d\n", i);
//		i++;
//	}*/
//
//
//	//int i = 10;
//	//if (i > 10)
//	//{
//	//	//...
//	//}
//	//while (i > 10)
//	//{
//	//	//...
//	//}
//
//	//switch 嵌套
//	//int n = 1;
//	//int m = 2;
//	//switch (n)
//	//{
//	//	case 1:
//	//		m++;
//	//	case 2:
//	//		n++;
//	//	case 3:
//	//		switch (n)
//	//		{
//	//		case 1:
//	//			n++;
//	//		case 2:
//	//			m++;
//	//			break;
//	//		case 3:
//	//			n++;
//	//		default:
//	//			break;
//	//		}
//	//	case 4:
//	//		m++;
//	//		break;
//	//	default:
//	//		break;
//	//}
//	//printf("%d %d", m, n); //5 2
//
//
//
//	/*switch (整型表达式)
//	{
//		语句项
//	}*/
//
//	/*int age;
//	scanf("%d", &age);
//
//	switch (age)
//	{
//		case 1:
//			printf("星期一\n");
//			break;
//		case 2:
//			printf("星期二\n");
//			break;
//		case 3:
//			printf("星期三\n");
//			break;
//		case 4:
//			printf("星期四\n");
//			break;
//		case 5:
//			printf("星期五\n");
//			break;
//		case 6:
//			printf("星期六\n");
//			break;
//		case 7:
//			printf("星期日\n");
//			break;
//		default:
//			printf("非法日期\n");
//		break;
//	}*/
//
//	return 0;
//}

//int main()
//{
//	//char ch;
//	getchar();//等价 scanf("%c", &ch);
//
//	system("pause"); // 等于printf和一个getchar
//
//	putchar('a');
//
//	return 0;
//}

//int main()
//{
//	int i = 1;//1
//	while (i < 10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//	printf("\n");
//
//	for (i = 1; i < 10; i++)
//	{
//		printf("%d ", i);
//	}
//	printf("\n");
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (; i < 10; i++)
//	{
//		if (i == 5)
//		{
//			break;
//		}
//		printf("%d ", i);
//	}
//	printf("\n");
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (; i < 10; i++)
//	{
//		if (i == 5)
//		{
//			//和while区别不用i++
//			continue;
//		}
//		printf("%d ", i);
//	}
//	printf("\n");
//
//	return 0;
//}

//int main()
//{
//	//死循环
//	while (1)
//	//{
//
//	}
//	//死循环
//	for (;;)
//	{
//
//	}
//}

//int main()
//{
	//逗号表达式取后面的值
//	int x = 0, y = 0;
//	for (x = 0, y = 0; x < 2, y < 5; x++, y++)
//	{
//		printf("h");
//	}
//
//	return 0;
//}

//int main()
//{
//	//循环几次？
//	//0次
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//	{
//		printf("h");
//	}
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	//连续赋值
//	a = b = c = 1;
//	printf("%d", a);
//	printf("%d", b);
//	printf("%d", c);
//
//	return 0;
//}

//int main()
//{
//	//至少会执行一次
//	int i = 10;
//	do
//	{
//		printf("%d\n", i);
//		++i;
//	} while (i < 10);
//
//	return 0;
//}

//int main()
//{
//	//至少会执行一次
//	int i = 0;
//	do
//	{
//		if (i == 5)
//		{
//			break;
//		}
//		printf("%d\n", i);
//		++i;
//	} while (i < 10);
//
//	i = 0;
//	do
//	{
//		if (i == 5)
//		{
//			i++;
//			continue;
//		}
//		printf("%d\n", i);
//		++i;
//	} while (i < 10);
//
//	return 0;
//}

//int main()
//{
//	//if
//	//else if
//	//else
//	//switch case  break  匹配跳转
//	//while   + break + continue
//	//for   + break + continue
//	//do while    + break + continue
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	long long ret = 1;
//
//	int n;
//	scanf("%d", &n);
//	while (i <= n)
//	{
//		ret *= i;
//		i++;
//	}
//	printf("%lld\n", ret);
//	
//	return 0;
//}

//int fun(int c){
//	int sum = 1;
//	for (int i = 1; i <= c; i++)
//	{
//		sum = sum * i;
//	}
//	return sum;
//}
//
////解构
//int main()
//{
//	int n;
//	int ret;
//	scanf("%d", &n);
//	ret = fun(n);
//	printf("%d", ret);
//
//	return 0;
//}

//int main()
//{
//	int n;
//	long long sum = 0;
//	long long ret = 1;
//	for (n = 2; n <= 4; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//
//	printf("%d\n", sum);
//
//	return 0;
//}

//int main()
//{
//	char a[] = "hello world";//12个
//	int len = strlen(a);
//	for (int i = 0; i < len; i++)
//	{
//		printf("%c ", a[i]);
//	}
//	printf("\n");
//	//printf("%d\n", len);
//
//	//逆置
//	int left = 0;
//	int right = len - 1;
//
//	while (left < right)
//	{
//		char tmp = a[left];
//		a[left] = a[right];
//		a[right] = tmp;
//		left++;
//		right--;
//	}
//
//	for (int i = 0; i < len; i++)
//	{
//		printf("%c ", a[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	char passwdArr[20];
//	
//	int n = 3;
//	while (n)
//	{
//		printf("请输入密码：");
//		scanf("%s", passwdArr);
//		if (strcmp(passwdArr, "bitekeji666") == 0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			n--;
//			printf("密码错误，请重新输入,还有%d次机会\n", n);
//		}
//	}
//
//	return 0;
//}

//猜数字
//int main()
//{
//	int num;
//	int x = rand() % 10;
//	printf("0-9猜一个数字：");
//	scanf("%d", &num);
//	while (1)
//	{
//		if (num > x)
//		{
//			printf("猜大了\n");
//		}
//		else if (num < x)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("猜中了\n");
//			break;
//		}
//		scanf("%d", &num);
//	}
//	
//	return 0;
//}

//折半查找
//二分查找
//#include <time.h>
//int main()
//{
//	int a[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };	
//	srand(time(0));//种子值
//	int x = rand() % 10;
//	//二分查找实现的核心是控制搜索的范围
//	//核心思想：缩小范围
//	//[left,right]
//	int left = 0, right = 9;
//	while (left <= right)
//	{
//		int mid = (left + right)/2;
//		if (a[mid] > x)
//		{
//			right = mid - 1;
//		}
//		else if (a[mid] < x)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了\n");
//			return mid;
//		}
//	}
//	printf("找不到");
//
//
//	return 0;
//}

//#include <time.h>
//int main()
//{
//	int a[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	srand(time(0));
//	int x = rand() % 10;
//	int left = 0;
//	int right = 9;
//	int mid;
//
//	printf("%d\n", x);
//
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//
//		if (a[mid] == x)
//		{
//			printf("找到了 %d", mid);
//			return mid;
//		}
//		else if (a[mid] > x)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			left = mid + 1;
//		}
//	}
//	printf("找不到");
//
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	system("shutdown -s -t 60");
//	printf("请输入我是猪，不然我就关掉你的电脑\n");
//
//again:
//	char str[20];
//	scanf("%s", str);
//	if (strcmp("我是猪", str) == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		printf("请输入我是猪，不然我就关掉你的电脑\n");
//		goto again;
//	}
//
//	return 0;
//}

//goto out
//out
//跳出深层循环

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>

//int main()
//{
//	int a, b, c;
//	for (a = 1; a <= 9; a++)
//	{
//		for (b = 1; b <= a; b++)
//		{
//			printf("%d * %d = %2d ", a, b, a * b);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int len = sizeof(a) / sizeof(int);
//	int max = a[0];
//	for (int i = 1; i < len; i++)
//	{
//		if (max < a[i])
//		{
//			max = a[i];
//		}
//	}
//	printf("%d\n", max);
//
//	return 0;
//}