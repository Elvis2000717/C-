#include <stdio.h>
int main()
{
	int a,b,c,sum=0,n;
	scanf("%d",&n);
	while(n>1){
		a=n%10;
		if(a%2==0){
			sum=sum+a;
		}
		n=n/10;
	}
	printf("%d",sum);
}
