#include<stdio.h>
#include<stdlib.h>

typedef struct node
 {
  int data;
  struct node *next;
 }node;
node *head=0;


 
 void sortedInsert(int x) 
{ 
    node* new_node;
    new_node=(node*)malloc(sizeof(node));
    new_node->data=x;
    new_node->next=NULL;
    node* current; 
    if (head== NULL || (head)->data >= new_node->data) 
    { 
        new_node->next = head; 
        head= new_node; 
    } 
    else
    { 
        current = head; 
        while (current->next!=NULL && 
               current->next->data < new_node->data) 
        { 
            current = current->next; 
        } 
        new_node->next = current->next; 
        current->next = new_node; 
    } 
}
 
void display()
 {
  node *temp=head;
  while(temp!=0)
   {
    printf("%d ",temp->data);
    temp=temp->next;
   }
 }
 
 void main()
{
    
    int option,ele;
    
    do
	{
	    printf("\n****MAIN MENU****\n");
		printf("1.Sorted Insertion\n");
		printf("2.Display\n");
		printf("3.Quit\n");

		printf("Enter your option : ");
		scanf("%d",&option);

		switch(option)
		{
			case 1 :
				printf("Input the element for sorted insertion: ");
				scanf("%d", &ele);

				sortedInsert(ele);
				break;
			case 2:
				display();
				break;
			default:
				printf("Wrong choice\n");
		}
    }while(option!=3);

}
