/*--------------------------------------------------
��������a��b��c���ɼ������룬���������С��һ������
˵�������������Ϊ�������ݣ���������ݼ��ÿո�����
���磺���룺2 1 3
      �����1
---------------------------------------------------*/
#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a<b){
		if(a<c){
			printf("%d\n",a);
		} 
		else{
			printf("%d\n",c);
		}
	} 
	else{
		if(b<c){
			printf("%d\n",b);
		} 
		else{
			printf("%d\n",c);
		}
	} 
}
	 
