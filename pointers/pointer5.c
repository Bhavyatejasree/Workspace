#include<stdio.h>

void main()

{
	int a[10];
	int *p;
	int max;

	p = &a[0];

	printf("enter array elements:\n");
	
	while(p < &a[10])
	{
	   scanf("%d" ,p);
	   p++;
	}

	printf("greatest element is: ");
	
	p = &a[0];
	max = a[0];

	while(p < &a[10])
	{
		if(max < *p)
		    {
			 max = *p;
	 		 		 
		    }
		 p++;
	}
	
	printf("%d", max);

}
