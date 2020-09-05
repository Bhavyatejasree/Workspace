#include<stdio.h>
void main()

{
	int a,b;
	int *p,*q;

	p = &a;
	q = &b;
	
	printf("enter two numbers:\n");
	scanf("%d", p);
	scanf("%d", q);

	if(a<b)
	{
		printf("b is greater");
	}
	else
	{
		printf("a is greater");
	}
}

