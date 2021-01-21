#include <stdio.h>
union Un
{
	short s[7];
	int n;
};
int main()
{
	union Un un;
	printf("%d\n", sizeof(union Un));//16
	printf("%d\n", sizeof(un));//16
	return 0;
}