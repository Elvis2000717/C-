#include <stdio.h>
int main()
{
	char a[] = "hello world";//12¸ö
	int len = strlen(a);
	for (int i = 0; i < len; i++)
	{
		printf("%c ", a[i]);
	}
	printf("\n");
	//printf("%d\n", len);

	//ÄæÖÃ
	int left = 0;
	int right = len - 1;

	while (left < right)
	{
		char tmp = a[left];
		a[left] = a[right];
		a[right] = tmp;
		left++;
		right--;
	}

	for (int i = 0; i < len; i++)
	{
		printf("%c ", a[i]);
	}

	return 0;
}