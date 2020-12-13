#include <stdio.h>
int main()
{
	int i = 10;
	printf("%d %d %d ", i++, i++, i++);//12 11 10 从右往左
	i = 10;
	printf("%d %d %d", ++i, ++i, ++i);//13 13 13  先++，全部加完再去内存中取
	return 0;
}