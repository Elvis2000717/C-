#include <stdio.h>
unsigned long long int fibonacci(unsigned int n,int m);
int T,i;
int main()
{
	unsigned int number1,number2;
	scanf("%d",&T);
	for(i=1;i<=T;i++){
	scanf("%u %u",&number1,&number2);
	unsigned long long int result=fibonacci(number1,number2);
	printf("%llu\n",result);
	}
}
unsigned long long int fibonacci(unsigned int n,int m)
 {
 	if(m==1){
 		return n;
	 }
	 if(n==1){
	 	return m;
	 }
	 if(m>1&&n>1){
	 	return fibonacci(m-1,n)+fibonacci(m,n-1);
	 }
}
