

#include <stdio.h>
#include <stdbool.h>

char alpha(char);

void main()

{
	char ch;

	char e;

	printf("enter input:");
	scanf("%c", &ch);

	e = alpha(ch);

	if(e)
	{
		printf("entered %c is an alhabet", ch);
	}

	else
	{
	printf("entered %c is not an alphabet", ch);
	}
}

char alpha(char ch)
{

	if(ch >= 'a' && ch <= 'Z' || ch >= 'A' && ch <= 'Z')

	return true;

	else
	
	return false;
	
}	
