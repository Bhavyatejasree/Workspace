#include<stdio.h>
void main()
{
	int a=1,b=1,i=1,n,c;
	printf("enter limit:");
	scanf("%d\n",&n);
	while(i<=n)
	{
		c=a+b;
		printf("%d,",c);
		a=b;
		b=c;
		i++;
	}
}
