#define EXCHANGE(num) ((num&(0x55555555))<<1)|((num&(0xaaaaaaaa))>>1)
#include <stdio.h>

int main()
{
	printf("%d\n", EXCHANGE(10));

	return 0;
}