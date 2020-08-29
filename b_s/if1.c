
/* Find Greatest among three */

#include<stdio.h>

void main()
{
	int a=200;
	int b=100;
	int c=300;

	if(a<b)
	{
		if(b<c)
		{
			printf("c is greater");
		}
		else
			printf("b is greater");
	}
	else
	{
		if(a<c)
		{
			printf("c is greater");
		}
		else
		{
			printf("a is greater");
		}
	}
}	  
