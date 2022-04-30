//Inserting Node at the End of linked list
#include<stdio.h>
#include<stdlib.h>


	struct node
	{
		int data;
		struct node *link;
	};
	void add_at_end(struct node *head,int a);
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
	
	
	add_at_end(head,67);
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
void add_at_end(struct node *head,int a)
{
	struct node *ptr,*temp;
	ptr=head;
	temp=(struct node *)malloc(sizeof(struct node));
	
	temp->data=a;
	temp->link=NULL;
	
	while(ptr->link !=NULL)
	{
		ptr=ptr->link;
	}
	ptr->link=temp;
}