#include<stdio.h>
#include<stdlib.h>

typedef struct node
 {
  int data;
  struct node *next;
 }node;
node *head=0;

insert_rear(int x)
 {
  node *temp;
  temp=(node*)malloc(sizeof(node));
  temp->data=x;
  temp->next=0;
   if(head==0)
    head=temp;
   else
    {
     node *temp1=head;
     while((temp1->next)!=0)
      {
        temp1=temp1->next;
      }
    temp1->next=temp;
    }
 }

insert_front(int x)
 {
  node *temp;
  temp=(node*)malloc(sizeof(node));
  temp->data=x;
  temp->next=head;
  head=temp;
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
		printf("1.Insert at front\n");
		printf("2.Insert at rear\n");
		printf("3.Display\n");
		printf("4.Quit\n");

		printf("Enter your option : ");
		scanf("%d",&option);

		switch(option)
		{
			case 1 :
				printf("Input the element for insertion at front: ");
				scanf("%d", &ele);

				insert_front(ele);
				break;
			case 2 :
				printf("Input the element for insertion at front: ");
				scanf("%d", &ele);

				insert_rear(ele);
				break;
			case 3:
				display();
				break;
			case 4:
				break;
				default:
				printf("Wrong choice\n");
		}
    }while(option!=4);

}


