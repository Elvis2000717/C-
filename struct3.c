#include <stdio.h>
struct S
{
	int a;
	int b;
};
int main()
{
	struct S a, *p = &a;
	a.a = 99;
	printf("%d\n", (*p).a);
	return 0;
}