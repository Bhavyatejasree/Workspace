#include<stdio.h>
void main()
{

	int a[10];
	int i = 0;
	int count;

	printf("enter array elements:\n");

	while(i < 10)
	{
		scanf("%d",&a[i]);
		i++;
	}

	i = 0;
	while(i < 10)
	{ 
		if(a[i]%2 == 0)
		 {
		   count++;
		 }
	  i++;
	}

	printf("Array has %d even numbers",count);

}

	
