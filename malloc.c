#include <stdio.h>

//动态内存管理
#include <stdlib.h>
int main()
{
	int a = 1;
	int b[10];

	//要求输入一个字符串
	//开固定空间存在的问题，开少了不够，开多了浪费

	int len;
	scanf("%d", &len);
	char* str = (char*)malloc(len);
	scanf("%s", str);
	printf("%s", str);

	//malloc需要释放空间
	free(str);

	return 0;
}