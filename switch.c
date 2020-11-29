#include <stdio.h>
int main()
{
	//switch Ç¶Ì×
	int n = 1;
	int m = 2;
	switch (n)
	{
		case 1:
			m++;
		case 2:
			n++;
		case 3:
			switch (n)
			{
			case 1:
				n++;
			case 2:
				m++;
				break;
			case 3:
				n++;
			default:
				break;
			}
		case 4:
			m++;
			break;
		default:
			break;
	}
	printf("%d %d", m, n); //5 2
}