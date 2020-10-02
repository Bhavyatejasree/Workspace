// linked list


# include <stdio.h>
# include <stdlib.h>


struct node{

	int data;
	struct node* link;
};

struct node *linked_list(struct node*, int);
void print(struct node *);

void main()
{
	struct node *p = NULL;

	p = linked_list(p,10);
	print(p);
	p = linked_list(p,20);
	print(p);
	p = linked_list(p,30);
	print(p);
	p = linked_list(p,40);
	print(p);
	p = linked_list(p,50);
	print(p);
	
}

struct node *linked_list(struct node* p, int d)
{
	 struct node *first = p;
	 struct node* new;

	 new = malloc(sizeof(struct node));

	 new->data   = d;
	 new->link   = NULL;

	 if (p == NULL)
		return new;
	 while(p->link != NULL)
		 p = p->link;
	 	 
	 p->link = new;
	
	return new;	 
}

void print(struct node* a)
{

	printf("%d\n", a->data);
}

