#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//������ƽ����д
#define N 10
//�꺯��  ���������ĺ��� �÷����� �ٶȿ� ���滻
//������������ȷ�� �漰����������ȼ�
//#define ADD(a,b) ((a)+(b))
//#define ADD(a,b) a+b

//�п��� ����
//int Add(int a, int b)
//{
//	return a + b;
//}

//������ݵ���� - �ṹ��
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
	//else ֻ�������if������

	////int == struct Student ����
	//struct Student Elvis = {"����", 20,"3B"};
	//struct Student zhang = { "����", 20, "3B" };

	//printf("%s,%d,%s\n", Elvis.name, Elvis.age, Elvis.addr);

	//struct Student* ps = &zhang;
	//printf("%s,%d,%s\n", ps->name, ps->age, ps->addr);

	//�궨�� ��һ��ȫ�ܸ� ��ǿ��ά����
	///*int a[N];
	//int i = 0;
	//while (i < N)
	//{

	//}*/

	//��������
	//ADD(1, 2);
	//Add(1, 2);

	//printf("%d\n", Add(1, 2) * 3);//(1+2)*3
	//printf("%d\n", ADD(1, 2) * 3);//1+2*3
	///*printf("%d\n", (ADD(1, 2)) * 3);*/

	//int a = 10;
	//char b = 'a';
	////ȫ�ֱ���
	//static int c = 20;

	////Ҫ����һ��ֵȥ��a��b��c�ĵ�ַ
	////��ô��������ͽ���ָ�����
	//int* pa = &a;
	//char* pb = &b;
	////���Ͳ�һ�������Ը�ֵ����ȥ
	///*pa = &b;*/
	//pa = &c;


	//�з���
	//printf("%d\n", &a);
	////�޷���
	////%u�޷�������
	//printf("%u\n", &a);
	//printf("%p\n", &a);

	//printf("%d\n", &b);
	//printf("%u\n", &b);

	//printf("%d\n", &c);
	//printf("%u\n", &c);

	//*���ַ
	//int* pa = &a;
	//*pa = 20;

	//char* pb = &b;
	//pa = &c;

	//*pa = 30;

	////32����ָ���� 4byte 64����ָ���� 8byte
	//printf("%d\n", sizeof(pa));//int*
	//printf("%d\n", sizeof(pb));//char*

	return 0;
}