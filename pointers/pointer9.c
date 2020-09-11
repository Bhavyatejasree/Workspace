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
	q = &a[9];

	while(p < &a[10])
	{
		while(q >= &a[0])
		{
			if(*p < *q)
			{
				temp = *p;
				*p = *q;
				*q = temp;	
			}
		   q--;
		 }
	    p++;
	 }

	printf("array elements are:\n");

	p = &a[0];

	while(p < &a[10])
	{
		printf("%d-", *p);
		p++;
	}
}


