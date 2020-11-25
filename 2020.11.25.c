#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//宏的名称建议大写
#define N 10
//宏函数  不是真正的函数 用法相似 速度快 宏替换
//这样才是最正确的 涉及运算符的优先级
//#define ADD(a,b) ((a)+(b))
//#define ADD(a,b) a+b

//有开销 调用
//int Add(int a, int b)
//{
//	return a + b;
//}

//多个数据的组合 - 结构体
//struct Student
//{
//	char name[20];
//	int age;
//	char addr[50];
//};
//
//typedef struct Student Stu;






int main()
{
	//else 只跟最近的if语句组合

	////int == struct Student 类型
	//struct Student Elvis = {"李鑫", 20,"3B"};
	//struct Student zhang = { "张三", 20, "3B" };

	//printf("%s,%d,%s\n", Elvis.name, Elvis.age, Elvis.addr);

	//struct Student* ps = &zhang;
	//printf("%s,%d,%s\n", ps->name, ps->age, ps->addr);

	//宏定义 改一处全能该 增强可维护性
	///*int a[N];
	//int i = 0;
	//while (i < N)
	//{

	//}*/

	//调换机制
	//ADD(1, 2);
	//Add(1, 2);

	//printf("%d\n", Add(1, 2) * 3);//(1+2)*3
	//printf("%d\n", ADD(1, 2) * 3);//1+2*3
	///*printf("%d\n", (ADD(1, 2)) * 3);*/

	//int a = 10;
	//char b = 'a';
	////全局变量
	//static int c = 20;

	////要求定义一个值去存a、b、c的地址
	////那么这个变量就叫做指针变量
	//int* pa = &a;
	//char* pb = &b;
	////类型不一样，所以赋值不过去
	///*pa = &b;*/
	//pa = &c;


	//有符号
	//printf("%d\n", &a);
	////无符号
	////%u无符号整形
	//printf("%u\n", &a);
	//printf("%p\n", &a);

	//printf("%d\n", &b);
	//printf("%u\n", &b);

	//printf("%d\n", &c);
	//printf("%u\n", &c);

	//*解地址
	//int* pa = &a;
	//*pa = 20;

	//char* pb = &b;
	//pa = &c;

	//*pa = 30;

	////32进程指针是 4byte 64进程指针是 8byte
	//printf("%d\n", sizeof(pa));//int*
	//printf("%d\n", sizeof(pb));//char*

	return 0;
}