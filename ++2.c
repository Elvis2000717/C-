#include <stdio.h>
int main()
{
	int i = 10;
	printf("%d %d %d ", i++, i++, i++);//12 11 10 ��������
	i = 10;
	printf("%d %d %d", ++i, ++i, ++i);//13 13 13  ��++��ȫ��������ȥ�ڴ���ȡ
	return 0;
}