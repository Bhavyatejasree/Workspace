#include<stdio.h>
void main()
{
	int a[10];
	int c = 0;
	int i = 0;
	int j = 0;

	printf("enter array elements:\n");

	while(i <= 10)
	{
	   scanf("%d", &a[i]);
	   i++;
	}
        
	while(j <= 10)
	{
	   if(a[j] % 2 == 0)
	   {
		 c = a[j] + c;
	   }
	 j++;
	}
	printf("sum of even numbers is %d", c);
}	
