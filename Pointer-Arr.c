#include <stdio.h>

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* p = arr;
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		printf("%d ", *(p + i));
	}
	return 0;
}