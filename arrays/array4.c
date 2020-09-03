#include<stdio.h>
void main()

{

	int a[10];
	int b[10];
	int i = 0;

	printf("enter array elements:\n");

	while( i < 10)
	{
		scanf("%d",&a[i]);
		i++;
	}

	i = 0;

	while(i < 10)
	{	
		b[i] = a[9 - i];
		i++;
	}

	i = 0;
	while (i < 10)
	{
		printf("b[%d] = %d\n",i,b[i]);
	}
}
