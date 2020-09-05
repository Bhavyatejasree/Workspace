#include<stdio.h>
void main()

{
	int a,b,c,d;
	int *p,*q,*r;

	p = &a;
	q = &b;
	r = &c;
	
	printf("enter values:\n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	d = (*p + *q) + *r;

	printf("sum is %d", d);
}
	
	

