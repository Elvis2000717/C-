#include <stdio.h>
void test1(int arr[])
{
	printf("%d\n", sizeof(arr));//4
}

void test2(char ch[])
{
	printf("%d\n", sizeof(ch));//4 ��Ϊ�����׵�ַ����ָ�룬���Ժ������޹�
}
int main()
{
	int arr[10] = { 0 };
	char ch[10] = { 0 };
	printf("%d\n", sizeof(arr));//40
	printf("%d\n", sizeof(ch));//10
	test1(arr);
	test2(ch);
}