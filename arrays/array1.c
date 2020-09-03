#include<stdio.h>
void main()

{
	int a[10];
	int i = 0;
	int c = 0;

	printf("enter array elements:\n");
	
	while (i < 10)
	{
  		scanf("%d",&a[i]);
		i++;
	}
	
	i = 0;
 	
	while (i < 10)
	{
		c = c  + a[i];
		i++;
	}

	printf("The sum of elements in the array are %d", c);

}
