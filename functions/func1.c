

#include <stdio.h>

int even_or_odd(int a, int b);

int main()
{
	int i,j;

	printf("enter limit:");
	scanf("%d", &i);

	printf("enter 0 for even and 1 for odd:");
	scanf("%d", &j);

	even_or_odd(i,j);
}

int even_or_odd(int a,int b)
{
	int m = 0;
	int n = 0;

	if(b == 0)
	{
		while(m < a)
		{
			if(m % 2 == 0)
			{
				printf("%d,",m);
			}
		m++;		
		}
	}	
	
	if(b == 1)
	{
		while(n < a)
		{
			if(n %2 != 0)
			{	
				printf("%d,", n);
			}
		n++;		
		}
	}
}
