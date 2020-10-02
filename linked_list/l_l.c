// create a node 


# include <stdio.h>
# include <stdlib.h>

struct node{
	int data;
	struct node* link;
};

void main()
{
	struct node* a = (struct node *) malloc(sizeof(struct node));

	a -> data = 40;

	printf("%d\n", a -> data);
}
