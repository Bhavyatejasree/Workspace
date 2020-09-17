

#include <stdio.h>

int power(int , int);

void main()
{
	int a,b;

	printf("enter limit:");
	scanf("%d", &a);
	printf("enter power:");
	scanf("%d", &b);
	
	power(a,b);
}

int power(int c, int d)
{
	int i = 1;
	int j = 1;
	int e = 1;

	for(i = 1; i < c; i++)
	{
		for(j = 1; j < d; j++)
		{
			e = (i * i) + e;
		}
	}
	
	("\nresult is: %d", e);
}
