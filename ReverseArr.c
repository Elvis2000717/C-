#define N 10
#include <stdio.h>

void ReverseArr(int* a, int n)
{
	for (int i = 0; i <= n / 2; i++)
	{
		int tmp;
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}

int main()
{
	int arr[N] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	ReverseArr(arr, N);
	for (int i = 0; i < N; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}