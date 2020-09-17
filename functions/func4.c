
#include <stdio.h>

int factorial(int);

void main()
{
	int a, b, n;

	printf("enter number:");
	scanf("%d", &n);
	
	factorial(n);
}

int factorial(int m)
{
	int i = 1;
	int j = 1;

	while(i < m)
	{
		j = m * j ;
		m--;
	}

	printf("%d", j);
}
