#include <stdio.h>
#include <string.h>
int main()
{
	int a[3][2] = { 1, 2, 3, 7, 5, 6 };
	int *p[3];
	p[0] = a[1];
	printf("%d\n", sizeof(*p[3]) / sizeof(int));
	printf("%d\n", *(p[0] + 1));
	printf("%d\n", a[1][1]);
	printf("%d\n", p[1]);

	//p��һ��ָ�����飬������һ�����飬�����д�ŵ���ָ��
	//7��a�еڶ��е��׵�ַ�浽��p�У�p��ʣ�µĿռ仹��û�б�ռ�õ�
	//9�м�1������һ���а�����ż�һ
	//�ȼ���a[1][1]���λ�õ�ֵ
	return 0;
}