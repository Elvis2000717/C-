#include <stdio.h>

int main()
{
	int a, n = 5;
	int arr[10] = { 0 };
	scanf("%d", &a);
	int sum = a;
	arr[0] = a;
	for (int i = 1; i < n; i++)
	{
		arr[i] = sum * 10 + a;
		sum = sum * 10 + a;
	}
	sum = 0;
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		sum = sum + arr[i];
	}
	printf("%d", sum);
}