
/*Print natural numbers in reverse order */

#include<stdio.h>

void main()
{
	int b;
	int c=0;

	printf("enter limit:");
	scanf("%d",&b);

	while(b>=c)
	{
		printf("%d,",b);
		b--;
	}
}

