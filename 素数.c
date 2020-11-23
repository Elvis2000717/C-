#include <stdio.h>
#include <math.h>
int sushu(int n)
{
 int i;
 for (i=3;i<=sqrt(n);i+=2)
 {
  if (n%i==0)
  {
   return 0;
  }
 }
 return n;
}
int main()
{
 int n,i,j=1;
 printf("21\n");
 for (i=101;i<199;i+=2)
 {
  if (sushu(i))
  {
   printf("%d ",i);
  }
 }
 printf("199");
}
