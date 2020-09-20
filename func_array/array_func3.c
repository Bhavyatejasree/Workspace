

#include <stdio.h>

int print_ar(int [10]);
int sort_ar(int x[10]);

void main()
{

	int a[10];
	int i = 0;

	printf("enter elements:\n");

	while(i < 10)
	{
		scanf("%d", &a[i]);
		i++;
	}

	sort_ar(a);

}


int sort_ar(int c[10])
{
	int temp;
	int j = 0;
	int i = 0;

	while(i < 10)
	{
		j = i + 1;
		while(j < 10)
		{	
			if(c[i] > c[j])
			{
				temp = c[i];
				c[i] = c[j];
				c[j] = temp;
			}
			j++;
		}
		i++;
	}
	
	print_ar(c);
}

int print_ar(int b[10])
{
	int i = 0;

	while(i < 10)
	{
		printf("%d-", b[i]);
		i++;
	}
}

