#include <stdio.h>  
int main()
{
	int murder;
	for (murder = 'A'; murder <= 'D'; murder++)
	{
		if (((murder != 'A') + (murder == 'C') + (murder == 'D') + (murder != 'D')) == 3)    //����һ�٣���if���ģ�������Ϊ����Ϊ1��Ҫ�Ǽٽ��Ϊ0�����if����  �������������ض�Ϊ����һ�٣����ض�����3.  
		{
			printf("murder is %c\n", murder);     //��������Ҫ������֣�Ϊһ���ַ���%c��������ַ�  

		}

	}
	return 0;
}