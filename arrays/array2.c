#include<stdio.h>

void main()

{
	int a[10];
	int flag = 0;
	int i = 1;
	int b;
	int j = 1;

	printf("enter array elements:\n");

	while(i < 10)
	{
		scanf("%d",&a[i]);
		i++;
	}

	printf("enter a number:");
	scanf("%d",&b);

	j = 0;
	while(j < 10)
	{
		if( a[j] == b)
		{
			printf("element found at index-%d\n",j);
			flag = 1;
			break;
		}

		printf("%d\n", j);
		j++;
	}

	if (flag == 0)
	{
		printf("element not found in index-%d\n",j);
	}
}
