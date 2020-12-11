#include <stdio.h>

void SwapArray(int a[], int b[], int n)
{
	int tmp;
	
	for (int i = 0; i < n; i++)
	{
		tmp = a[i];
		a[i] = b[i];
		b[i] = tmp;
	}
}

int main()
{
	int arr1[] = { 1, 2, 3, 4, 5 };
	int arr2[] = { 6, 7, 8, 9, 10 };
	int n = sizeof(arr1) / sizeof(int);
	SwapArray(arr1, arr2, n);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");

	return 0;
}