#include <stdio.h>  
int main()
{
	int murder;
	for (murder = 'A'; murder <= 'D'; murder++)
	{
		if (((murder != 'A') + (murder == 'C') + (murder == 'D') + (murder != 'D')) == 3)    //三真一假，在if语句的，括号里为真结果为1，要是假结果为0。因此if括号  后面若成立，必定为三真一假，即必定等于3.  
		{
			printf("murder is %c\n", murder);     //由于最终要输出凶手，为一个字符，%c可用输出字符  

		}

	}
	return 0;
}