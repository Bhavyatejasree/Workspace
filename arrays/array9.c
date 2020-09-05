#include<stdio.h>
void main()

{
	int a[10];
	int i = 0;
	int j = 0;
	int n;

	printf("enter array elements:\n");

	while(i < 10)
	{
	     	scanf("%d",&a[i]);
		i++;
	}
	printf("elemens after re-ordering are:\n");
	
	i = 0;

	while(i < 10)
	{  
           j = i +1;

	   while(j < 10)
           {       
	     if(a[j] < a[i])
	      	  { 
		    n = a[i];	  
		    a[i] = a[j];
		    a[j] = n;
		  }
	      j++;
	   }
 	   i++;
	}

	i = 0;

	while(i < 10)
	{
		printf("%d,", a[i]);
		i++;
	}

}
	   
