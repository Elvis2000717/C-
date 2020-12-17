#include <stdio.h>
void test1(int arr[])
{
	printf("%d\n", sizeof(arr));//4
}

void test2(char ch[])
{
	printf("%d\n", sizeof(ch));//4 因为都是首地址，是指针，所以和类型无关
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