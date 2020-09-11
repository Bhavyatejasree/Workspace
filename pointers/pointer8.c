#include<stdio.h>

void main()


{
	int a[5];
	int b[5];
	int *p;
	int *q;

	p = &a[0];
	q = &b[0];

	printf("enter Array-1 elements:\n");

	while(p < &a[5])
	{
		scanf("%d", p);
		p++;
	}

	printf("enter Array-2 elements:\n");

	while(q < &b[5])
	{
		scanf("%d", q);
		q++;
	}

	p = &a[0];

	printf("common elements are:\n");

	while(p < &a[5])
	{
		q = &b[0];

		while(q < &b[5])
		{
			if(*p == *q)
			{
				printf("%d", *p);
			}
			q++;
		}	
		p++;

	   printf("\n");
	}

}
