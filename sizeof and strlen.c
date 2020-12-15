#include <stdio.h>
int main()
{
	char str[] = "hello bit";
	printf("%d %d\n", sizeof(str), strlen(str));//10 9
	return 0;
}