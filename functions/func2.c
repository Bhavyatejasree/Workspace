

#include <stdio.h>

int power(int,int);

void main()
{
	int a,b,c;
	printf("enter base:");
	scanf("%d", &a);
	printf("enter power:");
	scanf("%d", &b);
	
	power(a,b);
}

int power(int c, int d)
{
	int e = 1;
	int i = 0;

	while(i < d)
	{
		e = c * e;
		i++;
	}
	
	printf("Result is: %d", e);
}
