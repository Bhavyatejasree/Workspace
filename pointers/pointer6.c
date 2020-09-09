#include<stdio.h>

void main()

{
	int a[9];
	int *p;
	int b = 0;

	p = &a[0];

	printf("enter array elements:\n");

	while(p < &a[10])
	{
		scanf("%d", p);
		p++;
	}
	
	p = &a[0];

	while(p < &a[10])
	{
		b = b + *p;  
		p++;
	}
	
	printf("sum of elements in the array is %d", b);
}
