
/* Print Factors of the number */

#include<stdio.h>

void main()
{
	int a;
	int i=1;

	printf("enter number");
	scanf("%d",&a);

	while (i <= a)
	{
		if (a%i == 0)
		{
			printf("%d,",i);
		}
		i++;
	}
}	
