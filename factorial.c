#include <stdio.h>

//�ǵݹ�
void Factorial1(a)
{
	int sum = 1;
	for (int i = 1; i <= a; i++)
	{
		sum = sum * i;
	}
	printf("%d\n", sum);
}

//�ݹ�
int Factorial2(b)
{
	if (b <= 2)
	{
		return b;
	}
	return Factorial2(b - 1) * b;
}

int main()
{
	int n;
	scanf("%d", &n);
	Factorial1(n);
	printf("%d\n", Factorial2(n));

	return 0;
}