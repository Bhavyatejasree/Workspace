

#include <stdio.h>

char reoccur(char*, char);

void main()
{
	char a[30];
	char b;
	int res;

	printf("enter string:");

	gets(a);

	printf("enter character:");

	scanf("%c", &b);

	res = reoccur(a,b); 

	printf("\nchar is repeated %d times", res);
}

char reoccur(char* m, char n)
{
	int i = 0;
	int res = 0;

	while(m[i] != '\0')
	{
		if(m[i] == n)
		{
			res++;
		}

		i++;
	}

	return res;
}

