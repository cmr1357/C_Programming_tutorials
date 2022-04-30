//Structure pointers

#include <stdio.h>

struct item
{
	char itemName[30];
	int qty;
	float price;
	float amount;
};

int main()
{
	
	struct item itm;	/*declare variable of structure item*/
	struct item *p;	/*declare pointer of structure item*/
	
	p = &itm;		/*pointer assignment - assigning address of itm to pItem*/
	
	/*read values using pointer*/
	printf("Enter product name: ");
	gets(p->itemName);
	printf("Enter price:");
	scanf("%f",&p->price);
	printf("Enter quantity: ");
	scanf("%d",&p->qty);
	
	/*calculate total amount of all quantity*/
	p->amount =(float)p->qty * p->price;
	
	/*print item details*/
	printf("\nName: %s",p->itemName);
	printf("\nPrice: %f",p->price);
	printf("\nQuantity: %d",p->qty);
	printf("\nTotal Amount: %f",p->amount);
	
	return 0;
}