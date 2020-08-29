#include<stdio.h>
void main()
{
	int i=1;
	int j,a;
	printf("enter limit:");
	scanf("%d",&a);
	while(i<=a)
	{
		j=1;
		{
			while(j<=i)
			{
			printf("*");
			j++;
			}
		i++;
		printf("\n");
		}
	}
}
