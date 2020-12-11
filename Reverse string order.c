#include <stdio.h>

void reverse_string(char* string)
{
	if (*string != 0)
	{
		reverse_string(string + 1);
	}
	//¼õÈ¥\0
	string--;
	printf("%c", *string);
}

int main()
{
	char arr[] = "student";
	int n;

	reverse_string(arr);

	return 0;
}