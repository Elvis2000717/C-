#include <stdio.h>

void Rotate(char* a, int n)
{
	int len = strlen(a);
	for (int i = 0; i < n; i++)
	{
		int tmp = a[0];
		for (int j = 0; j < len - 1; j++)
		{
			a[j] = a[j + 1];
		}
		a[len - 1] = tmp;
	}
}

int main()
{
	char str1[] = "ABCD";
	int n;
	scanf("%d", &n);
	Rotate(&str1, n);
	printf("%s", str1);

	return 0;
}