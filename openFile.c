#include <stdio.h>
#include <errno.h>

int main()
{
	//FILE * pFile;
	//pFile = fopen("unexist", "r");
	//if (pFile == NULL)
	//{
	//	printf("%s\n", _strerror(errno));
	//}

	//文件打开
	FILE *fp;
	if ((fp = fopen("D:\\demo.txt", "rb") == NULL))
	{
		printf("Fail to open file!\n");
		exit(0);  //退出程序（结束程序）
	}

	return 0;
}