/*#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	char arr[] = { 'b', 'i', 't' };
	printf("%d\n", strlen(arr));
	printf("\b");
	printf("\q");
	printf("%d\n", strlen("c:\test\121"));
	return 0;
}*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	printf("The size of short is %d bytes.\n", sizeof(short));
	printf("The size of int is %d bytes.\n", sizeof(int));
	printf("The size of long is %d bytes.\n", sizeof(long));
	printf("The size of long long is %d bytes.\n", sizeof(long long));
}