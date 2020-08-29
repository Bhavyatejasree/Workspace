#include<stdio.h>
void main()
{
	int a=100;
	int b=200;
	int c=300;
	if(a<b)
	{
	  if(b<c)
	  {
 	    printf("c is greater");
	  }
	  else
	    printf("b is greater");
	}
	else
	  printf("a is greater");
}	  
