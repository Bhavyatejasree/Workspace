#include<stdio.h>
void main()
{
	int i=1;
	int j=1;
	int a;
	printf("enter limit:");
	scanf("%d",&a);
	while(i<=a)
	{
		j=1;
		while(j<=a)
		{
			printf("*");
			j++;
		}
		a--;
		printf("\n");
	}
}
	
