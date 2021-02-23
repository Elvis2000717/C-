#include <stdio.h>
int main()
{
	int N,a,b=1,sum=0,c;
	scanf("%d",&N);
	a=N*N*N;
	if(a>10){
	while(a>=1){
		c=a%10;
		a=a/10;
		sum=c*c*c+sum;
	}
}
else{
	sum=a*a*a;
}
	printf("%d",sum);
 } 
