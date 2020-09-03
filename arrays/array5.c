#include<stdio.h>
void main()

{
	int a[5];
	int b[5];
	int c[10];
	int i = 0;
	int j = 0;
	
	printf("enter elements in array 1:\n");
	
	while(i < 5)
	{
	  scanf("%d",&a[i]);
	  i++;
	}
	
	i = 0;

	printf("enter elements in array 2:\n");

	while(i < 5)
	{
  	  scanf("%d",&b[i]);
	  i++;
	}

	printf("elements in array 3 are:\n");
	
	while(j < 5)
	 {	   
	      c[j] = a[4-j];
	      j++;
	 }
		
	 j = 0;
	 
	 while(j < 5)   
            {
	      c[j+5] = b[4-j];
	      j++;
	    }

	i = 0;
	  while(i < 10)
	  {		  
 	 	  printf("%d-",c[i]);
		  i++;
 	  } 
}
	  

