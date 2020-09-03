#include<stdio.h>
void main()

{
	int a[] = {10,20,30,40,50};
	int b[] = {60,70,80,90,100};
	int c[10];
	int i = 0;
	int j = 0;

	while  (i < 5)
	{     
	        c[i] = a[i];
		i++;
	}
	
	j = 0;

	while (j < 5)
        {		      
		c[j+5] = b[j];
	       	j++;
	}

	i = 0;
	while (i < 10)
        {
	    printf("c[%d] = %d\n", i,c[i]);
	    i++;
	}
}	
	
