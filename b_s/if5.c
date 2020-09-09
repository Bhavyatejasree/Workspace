#include<stdio.h>
void main()

{
	int a,b,c;

	printf("enter sides of the triangle");

	printf("\nenter side 1:");
	scanf("%d", &a);

	printf("\nenter side 2:");
	scanf("%d", &b);

	printf("\nenter side 3:");
	scanf("%d", &c);
	
	if( (a + b) > c || (b+c) > a || (c+a) || b )
	{
		printf("It is a triangle");
	}
	else
		printf("It is not a triangle");
}
