#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c, d;
	while (scanf("%d %d", &a, &b) != EOF){
		c = a + b;
		if (c != 0){
			printf("%d\n", c);
		}
		else break;
	}
}