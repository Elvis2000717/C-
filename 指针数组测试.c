#include <stdio.h>
#include <string.h>
int main()
{
	int a[3][2] = { 1, 2, 3, 7, 5, 6 };
	int *p[3];
	p[0] = a[1];
	printf("%d\n", sizeof(*p[3]) / sizeof(int));
	printf("%d\n", *(p[0] + 1));
	printf("%d\n", a[1][1]);
	printf("%d\n", p[1]);

	//p是一个指针数组，本质是一个数组，数组中存放的是指针
	//7把a中第二行的首地址存到了p中，p中剩下的空间还是没有被占用的
	//9中加1是在那一行中把列序号加一
	//等价于a[1][1]这个位置的值
	return 0;
}