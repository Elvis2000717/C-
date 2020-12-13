#include <stdio.h>
int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++ && ++b && d++;//1 2 3 4
	//i = a++||++b||d++;//1 3 3 4
	printf("a = %d\n b = %d\n c = %d\n d= %d\n", a, b, c, d);
	return 0;
}