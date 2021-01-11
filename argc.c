//#include ＜stdio.h＞
//#include ＜string.h＞
//main(int argc, char *argv[])
//int i, len = 0;
//for (i = 1; i＜argc; i += 2)len += strlen(argv[i]);
//prinff("%d\n", len);

#include <stdio.h>//#包含<stdio.h>

int main(int argc, char* argv[])    //整数类型主函数(整数类型统计参数个数,字符类型指针数组指向字符串参数)
{
	printf("%d\n", argc);           //格式化输出
	while (argc)                    //当(统计参数个数)
		printf("%s\n", argv[--argc]);   //格式化输出
	return 0;                      //返回0;正常退出
}