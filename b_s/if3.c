#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter side1:");
	scanf("%d",&a);
	printf("enter side2:");
	scanf("%d",&b);
	printf("enter side3:");
	scanf("%d",&c);
	if(a=b && b==c)
		printf("Triangle is equilateral");
	if(a!=b && b==c || a==b && b!=c)
	 	printf("Triangle is isosceles");
	if(a!=b && b!=c)
		printf("Triangle is scalene");
}

