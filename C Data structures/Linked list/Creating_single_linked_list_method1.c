//create a single linked list method 1-disadvantage a lote of variables..
#include<stdio.h>
#include<stdlib.h>

	struct node
	{
		int data;
		struct node *link;
	};
int main()
{
	struct node *head=NULL;
	
	head=(struct node*)malloc(sizeof(struct node));
	head->data=45;
	head->link=NULL;
	
	struct node *current=(struct node*)malloc(sizeof(struct node));
	current->data=98;
	current->link=NULL;
	head->link=current;
	
	struct node *current2=(struct node*)malloc(sizeof(struct node));
	current2->data=2;
	current2->link=NULL;
	current->link=current2;
	return 0;
	
}
