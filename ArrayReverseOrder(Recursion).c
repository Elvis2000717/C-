//�������򣨵ݹ鷽ʽ��
//�������ַ�
//β�ַ��滻����ĸ
//β�ַ���Ϊ\0
//�ݹ����
//	�г�����
//	�����Ǵ��ݵ�ǰ�ַ����ĵڶ����ַ���ʼ���ַ���
//�ñ��������������ĸ���滻��ǰ��β�ַ�

#include <stdio.h>
#include <string.h>

int my_string(char* a)
{
	if (*a == '\0')
	{
		return 0;
	}
	else
	{
		return 1 + my_string(a + 1);
	}
}

void ReverseOrder(char a[])
{
	char temp = a[0];
	int n = my_string(a);
	a[0] = a[n - 1];
	a[n - 1] = '\0';
	int m = my_string(a + 1);
	if (m > 1)
	{
		my_string(a + 1);
	}
	a[n - 1] = temp;
}

int main()
{
	char arr[10] = { 0 };
	scanf("%s", arr);
	ReverseOrder(arr);
	printf("%s", arr);

	return 0;
}