#include <stdio.h>
int main()
{
	int a,b,c;
	for(a=1;a<9;a++){
		for(b=1;b<a;b++){
			printf("%d*%d=%2d ",a,b,a*b);
		}
		printf("\n");
	}
	return 0;
 } 
