#include<stdio.h>
void main()

{
	int a[9];
	int *p;
	int i = 0;

	p = &a[0];
	
	printf("enter array elements:\n");

	while(p < &a[10])
	{		
		scanf("%d", p);
		p++;
	}

	p = &a[0];

	printf("entered values are:");

	while(p < &a[10])
	{
		printf("\n%d", *p);
		p++;
	}
}

