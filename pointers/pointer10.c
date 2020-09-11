
#include <stdio.h>

void main()
{
	int a[5];
	int b[5];
	int c[10];

	int *p = a;
	int *q = b;
	int *r = c;

	printf("enter array 1 elements:\n");

	while(p < &a[5])
	{
		scanf("%d", p);
		p++;
	}
	
	printf("enter array 2 elements:\n");

	while(q < &b[5])
	{
		scanf("%d", q);
		q++;
	}
	
	p = &a[0];
	q = &b[0];
	r = &c[0];

	while(p < &a[5])
	{
		*r = *p;
		p++;
		r++;
	}
	while(q < &b[5])
	{
		*r = *q;
		q++;
		r++;
	}

	r = &c[0];

	while(r < &c[10])
	{
		printf("%d-", *r);
		r++;
	} 
}
