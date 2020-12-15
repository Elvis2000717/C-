#include <stdio.h>
int main()
{
	int x = 0, y = 1, z = 2, m = 3, n = 4;
	//优先级只能确定相邻两个操作符执行优先级
	x * y + y * z + (m + n);

	x * y + y * z;//多个操作符时，执行顺序有没有歧义
	x*y + y*z + z*m;//有歧义

	int c = 1;
	//不确定的是+号右边的还是左边的
	c + --c;
	return 0;
}