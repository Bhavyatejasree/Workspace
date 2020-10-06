// stack 


#include <stdio.h>
#include <stdlib.h>

struct stack{
	int data;
	struct stack *link;
};


void push(struct stack**, int);
int pop(struct stack**);

void main()
{
	struct stack *p = NULL;
	int res;

	push(&p ,10);
	push(&p, 20);
	push(&p, 30);
	push(&p, 40);
	push(&p, 50);

	res = pop(&p);
	printf("%d\n", res);
	res = pop(&p);
	printf("%d\n", res);
	res = pop(&p);
	printf("%d\n", res);
	res = pop(&p);
	printf("%d\n", res);
	res = pop(&p);
	printf("%d\n", res);

}

void push(struct stack **a, int b)
{
	struct stack *new;
        new = malloc(sizeof(struct stack));

	if(new == NULL)
	{
		printf("list is empty");
	}

		new->data = b;
		new->link = *a;
	 
	*a = new;	
}

int pop(struct stack **p)
{
	struct stack *temp;
	int val;

	if(*p == NULL)
	{
		printf("stack is empty\n");
		return 0;
	}

	val = (*p)->data;

	temp = (*p);

	(*p) = (*p)->link;

	free(temp);
	
	return val;
}
	
