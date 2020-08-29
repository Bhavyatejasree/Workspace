
/* fibanocci series */

#include<stdio.h>

void main()
{
	int a=0,b=1,i=1,n,c = 0;

	printf("enter limit:");
	scanf("%d",&n);

	printf("fibanocci series: \n");

	while (c < n)
	{
		c=a+b;
		printf("%d,",c);
		a=b;
		b=c;
		i++;
	}
	printf("\n");
}
