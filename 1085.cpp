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
		return 1;
	}
	else {
		if(n>=3){
			return fibonacci(n-1)+fibonacci(n-2);
		}
	}
}
