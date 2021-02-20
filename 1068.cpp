#include <stdio.h>
#include <string.h>
int main()
{
	char str[100];
	int i;
	while(scanf("%s",str)!=EOF)
	{
		int flag=1;
		int n=strlen(str);
		if(str[0]>='0' && str[0]<='9')
		{
			flag=0;
		}
		else
		{
			for(i=1;i<n;i++)
			{
					if(!((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')||(str[i]>='0'&&str[i]<='9')||(str[i]=='_')))
					{
						flag=0;
					}
			}
		}
		if(flag)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}

