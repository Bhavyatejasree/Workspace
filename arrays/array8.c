#include<stdio.h>
void main()
{
	int a[10];
	int b[10];
	int i = 0;
	int j = 0;
	int c[10];
	
	printf("enter array1 elements:\n");

	while(i < 5)
	{
	   scanf("%d", &a[i]);
	   i++;
	}
	printf("enter array2 elements:\n");

	while(j < 5)
	{
	   scanf("%d", &b[j]);
	   j++;
	}
	
	printf("common elements are:\n");

	i = 0;
	j = 0;

	while(i < 5)
	{
	   while(j < 5)
	   {	   
	   	if(a[i] == b[j])
	 	{
	     	   printf("%d", a[i]);
		}
	    j++;
	   }
	  i++; 
	}
	printf("\n");
}
