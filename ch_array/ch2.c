
#include <stdio.h>

void main()
{
	char a[30];
	char *b = a;
	
	gets(a);

	printf("entered string is %s\n", b);

}

