
#include <stdio.h>

int fact(int);

int perm(int, int);

int comb(int , int);

void main()
{

	int n,r,res;

	printf("enter n value:");
	scanf("%d", &n);

	printf("enter r value:");
	scanf("%d", &r);

	res = perm(n,r);
	res = comb(n,r);

	printf(" result of premutation is: %d\n", perm(n,r));

	printf(" result of combination is: %d\n", comb(n,r));
}

int fact(int m )
{
	int i = 1;
	int res = 1;

	while(i <= m)
	{
		res *= m;
		m--;
	 }

	return res;
}


int perm(int a, int b)
{
	int res;

	res = (fact(a))/(fact(a - b));

	return res;
}

int comb(int a, int b)
{
	int res;

	res = (fact(a))/((fact(b) * fact(a-b)));

	return res;
}
