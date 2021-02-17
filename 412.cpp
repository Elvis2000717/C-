#include <stdio.h>
int main()
{
	int n,t,sum;
	t=1;
	sum=0;
	scanf("%d",&n);
	while(n>=t){
	sum=t*(t+1)+sum;
	t=t+1;
}
printf("%d",sum);
}
