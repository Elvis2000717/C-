//数组逆序（递归方式）
//保存首字符
//尾字符替换首字母
//尾字符变为\0
//递归调用
//	判出条件
//	传参是传递当前字符串的第二个字符开始的字符串
//用保存的下来的首字母，替换当前的尾字符

#include <stdio.h>
#include <string.h>

int my_string(char* a)
{
	if (*a == '\0')
	{
		return 0;
	}
	else
	{
		return 1 + my_string(a + 1);
	}
}

void ReverseOrder(char a[])
{
	char temp = a[0];
	int n = my_string(a);
	a[0] = a[n - 1];
	a[n - 1] = '\0';
	int m = my_string(a + 1);
	if (m > 1)
	{
		my_string(a + 1);
	}
	a[n - 1] = temp;
}

int main()
{
	char arr[10] = { 0 };
	scanf("%s", arr);
	ReverseOrder(arr);
	printf("%s", arr);

	return 0;
}