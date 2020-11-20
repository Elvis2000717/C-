#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//类型重定义
//typedef unsigned int u_int;

//int main()
//{
//	/*int a, b;
//	scanf("%d %d", &a, &b);
//	if (a > b)
//	{
//		printf("%d", a);
//	}
//	else{
//		printf("%d", b);
//	}*/
//
//	/*unsigned int ui = 0;
//	u_int uj;*/
//
//	//关键词
//	
//
//	return 0;
//}

//int a;//全局
//void add()
//{
//	int i = 0;
//	++i;
//	printf("%d", i);
//}
//int main()
//{
//	int b;//局部
//	add();//1
//	add();//1
//	add();//1
//
//	return 0;
//}

//void add()
//{
//	//static 改变了局部变量的生命周期，但不改变局部变量的作用域  生命周期变成了整个程序
//	static int i = 0;
//	++i;
//	printf("%d", i);
//}
//int main()
//{
//	//int b;//局部
//	add();//1
//	add();//2
//	add();//3
//
//	return 0;
//}

//声明以下j是外部（在其他文件中定义）
//extern int j;
//void add()
//{
//	//static 改变了局部变量的生命周期，但不改变局部变量的作用域  生命周期变成了整个程序
//	//static 修饰全局变量 如果有外部声明的全局变量不能在其他文件中使用  修饰全局变量改变的是变量的可见性（只在当前文件可以用）
//	//static 可以修饰函数 改变的是函数的可见性（只在定义文件可以用）
//	//局部变量和局部静态变量  周期不一样 作用域一样
//	//全局变量和全局静态变量  周期一样  作用域不一样
//	//局部变量和全局变量
//	
//	static int i = 0;
//	++i;
//	printf("%d", i);
//	++a;
//	printf("%d", a);
//}
//
////声明一下 sub是在其他函数
//extern void sub();
//
//int main()
//{
//	//int b;//局部
//	add();//1
//	add();//2
//	add();//3
//
//	return 0;
//}

//定义宏  
//#define MAX 1000;

//指针