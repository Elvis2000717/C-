#include <stdio.h>

//调整奇数偶数顺序
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;

	while (left < right)
	{
		while (arr[left] % 2 != 0 && left < right)
		{
			left++;
		}
		while (arr[right] % 2 == 0 && left < right)
		{
			right--;
		}

		//交换
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
			left++;
			right--;
		}
	}

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}
