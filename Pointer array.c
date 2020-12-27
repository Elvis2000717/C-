#include <stdio.h>
int main()
{
	//数组
	int arr[5];
	//指针数组
	int *parr1[10];
	//数组指针
	int(*parr2)[10];
	//指针数组的数组   数组中存放10个指针，这10个指针指向10个数组，这10个数组每个数组的大小是5
	int(*parr3[10])[5];

	return 0;
}