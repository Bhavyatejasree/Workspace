#include<stdio.h>
void main()

{
	int a,b;
	int temp;
	int *p,*q;

	p = &a;
	q = &b;

	printf("enter two numbers:\n");
	scanf("%d", p);
	scanf("%d", q);
	
	temp = *p;
	*p = *q;
	*q = temp;

	printf("the values are:\n %d \n %d \n" , a,b);
}
