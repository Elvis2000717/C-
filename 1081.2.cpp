#include <stdio.h>
int factorial(int x);
int main() {
	int m,n,c,x;
	scanf("%d",&x);
	while(x--) {
		scanf("%d%d",&n,&m);
		if(n==0&&m==0)break;
		c=factorial(n)/(factorial(n-m)*factorial(m));
		printf("%d\n",c);
	}
}
int factorial(int x) {
	for(int i=x-1; i>0; i--)
		x*=i;
		if(x==0) x=1;//∂®“Â0£°=1 
	return x;
}
