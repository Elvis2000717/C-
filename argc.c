//#include ��stdio.h��
//#include ��string.h��
//main(int argc, char *argv[])
//int i, len = 0;
//for (i = 1; i��argc; i += 2)len += strlen(argv[i]);
//prinff("%d\n", len);

#include <stdio.h>//#����<stdio.h>

int main(int argc, char* argv[])    //��������������(��������ͳ�Ʋ�������,�ַ�����ָ������ָ���ַ�������)
{
	printf("%d\n", argc);           //��ʽ�����
	while (argc)                    //��(ͳ�Ʋ�������)
		printf("%s\n", argv[--argc]);   //��ʽ�����
	return 0;                      //����0;�����˳�
}