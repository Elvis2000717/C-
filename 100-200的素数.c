#include <stdio.h>
int main()
{
	int i=0,count=0;
	for(i=100;i<=200;i++){
		int h=0;
		for(h=2;h<i;h++){
			if(i%h==0)
			break;
		}
		if(i==h){
			count++;
			printf("%d\n",i);
		}
	}
	printf("count=%d\n",count);
	return 0;
}
