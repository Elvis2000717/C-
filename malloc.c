#include <stdio.h>

//��̬�ڴ����
#include <stdlib.h>
int main()
{
	int a = 1;
	int b[10];

	//Ҫ������һ���ַ���
	//���̶��ռ���ڵ����⣬�����˲������������˷�

	int len;
	scanf("%d", &len);
	char* str = (char*)malloc(len);
	scanf("%s", str);
	printf("%s", str);

	//malloc��Ҫ�ͷſռ�
	free(str);

	return 0;
}