#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
  int data;
  struct node *next;
 }node;

node* push(node* top,int x)
 {
  node *temp;
  temp=(node*)malloc(sizeof(node));
  temp->data=x;
  temp->next=top;
  top=temp;
  return top;
 }

void display(node* top)
{
  node *temp=top;
  if(top==NULL)
  {
   printf("Stack is Empty...!!");
	return;
  }
  while(temp->next!=NULL)
   {
    printf("%d->",temp->data);
    temp=temp->next;
   }
	printf("%d",temp->data);
}

node* pop(node* top)
{	
	node *temp=top;
	if(top==NULL){
	printf("Stack Underflow\n");
    return top;
	}
	top=temp->next;
	printf("%d is popped\n",temp->data);
	free(temp);
    return top;
}

void main()
{
    
    int option,ele;
    node *top=NULL;
    do
	{
	    printf("\n\n****MAIN MENU****\n");
		printf("1.Push\n");
		printf("2.Pop\n");
		printf("3.Quit\n");

		printf("Enter your option : ");
		scanf("%d",&option);

		switch(option)
		{
			case 1 :
				printf("Input the element to push: ");
				scanf("%d", &ele);
				top=push(top,ele);
				display(top);
				break;
			case 2 :top=pop(top);
					display(top);
				break;
			case 3:
				break;
				default:
				printf("Wrong choice\n");
		}
    }while(option!=3);

}
