#include <stdio.h>
int main()
{
	char arr[10] = { 0 };
	printf("%p\n", arr);
	printf("%p\n", &arr);
	printf("%p\n", arr + 1);
	printf("%p\n", &arr + 1);
	return 0;
}