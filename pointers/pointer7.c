#include<stdio.h>

void main()


{
	int a[10];
	int *p;
	int *q;
	int temp;

	p = &a[0];
	q = &a[9];

	printf("enter array elements:\n");
	
	while(p <= q)
	{
		scanf("%d",p);
		p++;
	}

	p = &a[0];

	
	while(p < q)
	{
		temp = *p;
	        *p = *q;
		*q = temp;	
		p++;
		q--;
	}

	p = &a[0];
	q = &a[9];;

	printf("\nelements after reversing\n");

	while(p <= q)
	{
		printf("%d\n", *p);
		p++;
	}

}

	
	

	

