#include <stdio.h>

int main()
{
	float ret = 0;
	for (float i = 1; i < 100; i = i + 2.0)
	{
		ret = ret + (1 / i);
	}
	//printf("%lf ", ret);

	for (float j = 2; j <= 100; j = j + 2)
	{
		ret = ret - (1 / j);
	}
	printf("%lf ", ret);

	return 0;
}