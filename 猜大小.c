#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int num;
	int x = rand() % 10;
	printf("0-9��һ�����֣�");
	scanf("%d", &num);
	while (1)
	{
		if (num > x)
		{
			printf("�´���\n");
		}
		else if (num < x)
		{
			printf("��С��\n");
		}
		else
		{
			printf("������\n");
			break;
		}
		scanf("%d", &num);
	}

	return 0;
}