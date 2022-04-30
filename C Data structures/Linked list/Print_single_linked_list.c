//Traversing linked list
#include<stdio.h>
#include<stdlib.h>


	struct node
	{
		int data;
		struct node *link;
	};
	void print(struct node *head);
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
	
	current=(struct node*)malloc(sizeof(struct node));
	current->data=2;
	current->link=NULL;
	
	head->link->link=current;
	
	
	print(head);
	
	return 0;
}
void print(struct node *head)
{
	int count =0;
	if(head==NULL)
	{
		printf("Linked list is empty\n");
	}
	struct node *ptr =NULL;
	ptr=head;
	while(ptr!=NULL)
	{
		count ++;
		printf("%d\n",ptr->data);
		ptr=ptr->link;
	}

		
}