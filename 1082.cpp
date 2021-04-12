#include <stdio.h>
unsigned long long int fibonacci(unsigned int n);
int T,i;
int main()
{
	unsigned int number;
	scanf("%d",&T);
	for(i=1;i<=T;i++){
	scanf("%u",&number);
	unsigned long long int result=fibonacci(number);
	printf("%llu\n",result);}
}
unsigned long long int fibonacci(unsigned int n)
{
	if (1==n||2==n){
		return n-1;
	}
	else {
	return 4*fibonacci(n-1)-5*fibonacci(n-2);
	}
}
