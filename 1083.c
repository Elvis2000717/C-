#include <stdio.h>
unsigned long long int fibonacci(unsigned int n);
int main()
{
	unsigned int number;
	scanf("%u",&number);
	unsigned long long int result=fibonacci(number);
	printf("%llu\n",result);
}
unsigned long long int fibonacci(unsigned int n)
{
	if (1==n||2==n){
		return n+1;
	}
	else {
	if(3==n){
		return 5;
	}else{
		return fibonacci(n-1)+fibonacci(n-2)-fibonacci(n-3);
	}
}
}
