#include<stdio.h>

void main()

{
	int a[10];
	int *p;
	int *q;
	int temp;

	p = &a[0];

	printf("enter array elements:\n");

	while(p < &a[10])
	{
		scanf("%d", p);
		p++;
	}

	p = &a[0];
	while(*p < *q)
	{
		q = &a[10];
		while(*p < *q)
		{
			if(p < q)
			{	
				*p = temp;
				*p  = *q;
				temp = *q;
			}
	           q--;
		}
	    p++;
	 }

	printf("array elements are:\n");

	p = &a[0];
	q = &a[10];

	while(p < q)
	{
		printf("%d-", *p);
		p++;
	}
}


