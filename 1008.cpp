#include <stdio.h>
int main()
{
	int a,b,c,N,sum=0;
	scanf("%d\n",&N);
	while(scanf("%d",&a)!=EOF){
		if(a!=0){
			for(b=0;b<a;b++){
				scanf("%d",&c);
				sum+=c;
			}
			printf("%d\n",sum);
			sum=0;
		}
	}
}
