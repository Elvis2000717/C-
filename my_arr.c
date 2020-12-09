#define N 5
#include <stdio.h>

//初始化数组全为0
void init(int* arr1)
{
	for (int i = 0; i < N; i++)
	{
		arr1[i] = 0;
	}
}

//打印数组的每个元素
void print(int* arr2)
{
	for (int i = 0; i < N; i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");
}

//数组元素的逆置
void reverse(int* arr3)
{
	int tmp;
	for (int i = 0; i < N; i++)
	{
		if (i <= N / 2)
		{
			tmp = arr3[i];
			arr3[i] = arr3[N - 1 - i];
			arr3[N - 1 - i] = tmp;
		}
		else
		{
			break;
		}
	}
}

int main()
{
	int arr1[N] = { 1, 2, 3, 4, 5 };
	int arr2[N] = { 1, 2, 3, 4, 5 };
	int arr3[N] = { 1, 2, 3, 4, 5 };

	init(arr1);
	for (int i = 0; i < N; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	print(arr2);

	reverse(arr3);
	print(arr3);

}