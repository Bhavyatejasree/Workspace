

#include<stdio.h>

char is_lower(char* );
char is_upper(char* );


void main()
{
	char ch[30] = "Hi....How are you?";
	
	is_lower(ch);
	printf("lower case: %s\n", ch);

	is_upper(ch);	
	printf("upper case: %s\n", ch); 
}

char is_upper(char* a )
{
	int i = 0;
	
	while(a[i] !='\0')
	{
		if((a[i] >= 'a') && (a[i] <='z'))
		{
			a[i] = a[i] -  32;

		}			
		
		i++;
	}
}

char is_lower(char* b)
{
	int i = 0;

	while(b[i] != '\0')
	{
		if((b[i] >= 'A') && (b[i] <= 'Z'))
		{
			b[i] = b[i] + 32;

		}

		i++;
	}
}
