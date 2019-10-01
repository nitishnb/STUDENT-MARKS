#include<stdio.h>
#include<stdlib.h>

typedef struct node
 {
  int data;
  struct node *next;
 }node;
node *head=0;

void insert_rear(int x)
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

void insert_front(int x)
 {
  node *temp;
  temp=(node*)malloc(sizeof(node));
  temp->data=x;
  temp->next=head;
  head=temp;
 }

void deletef()
{
  node *temp=head;
  head=head->next;
  printf("\n%d is deleted",temp->data);
  free(temp);
}

void deleter()
{
  node *temp=head,*prev;
  while(temp->next!=NULL)
  {
   prev=temp;
   temp=temp->next;
  }
  prev->next=NULL;
  printf("\n%d is deleted",temp->data);
  free(temp);
}

void delete_pos(int n)
{
 node *temp=head,*temp2;
 int i;
 if(n==1)
 { 
    head=head->next;
    printf("\n%d is deleted",temp->data);
    free(temp);
 }
else
   {
     for(i=0;i<n-1;i++)
     {
        temp2=temp;
        temp=temp->next;
     }
     temp2->next=temp->next;
     printf("\n%d is deleted",temp->data);
     free(temp);
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
    
    int option,ele,pos;
    
    do
	{
	    printf("\n\n\n****MAIN MENU****\n");
		printf("1.Insert at front\n");
		printf("2.Insert at rear\n");
		printf("3.Delete at front\n");
		printf("4.Delete at rear\n");
		printf("5.Delete at any position\n");
		printf("6.Quit\n");

		printf("Enter your option : ");
		scanf("%d",&option);

		switch(option)
		{
			case 1 :
				printf("Input the element for insertion at front: ");
				scanf("%d", &ele);

				insert_front(ele);
                                display();
				break;
			case 2 :
				printf("Input the element for insertion at rear: ");
				scanf("%d", &ele);

				insert_rear(ele);
                                display();
				break;
			case 3: deletef();
                                display();
                                break;
                        case 4: deleter();
                                display();
                                break;
                        case 5: printf("\nEnter the position of the element to be deleted(1 to n) :");
                                scanf("%d",&pos);
                                delete_pos(pos);
                                display();
				break;
			case 6:
				break;
				default:
				printf("Wrong choice\n");
		}
    }while(option!=6);

}
