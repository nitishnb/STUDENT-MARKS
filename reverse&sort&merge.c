#include<stdio.h>
#include<stdlib.h>

typedef struct node
 {
  int data;
  struct node *next;
 }node;


    node *head1=0;
    node *head2=0;
    
void insert_front1(int x)
 {
  node *temp;
  temp=(node*)malloc(sizeof(node));
  temp->data=x;
  temp->next=head1;
  head1=temp;
 }
    
void insert_front2(int x)
 {
  node *temp;
  temp=(node*)malloc(sizeof(node));
  temp->data=x;
  temp->next=head2;
  head2=temp;
 }

void display1()
 {
  node *temp=head1;
  while(temp!=0)
   {
    printf("%d ",temp->data);
    temp=temp->next;
   }
  printf("\n\n");
 }
 

void display2()
 {
  node *temp=head2;
  while(temp!=0)
   {
    printf("%d ",temp->data);
    temp=temp->next;
   }
  printf("\n\n");
 }
 
void reverse1()
{
  node *c=head1;
  node *prev=NULL;
  node *next;
  while(c!=NULL){
    next=c->next;
    c->next=prev;
    prev=c;
    c=next;
   }
  head1=prev;
}

 
void reverse2()
{
  node *c=head2;
  node *prev=NULL;
  node *next;
  while(c!=NULL){
    next=c->next;
    c->next=prev;
    prev=c;
    c=next;
   }
  head2=prev;
}

void merge()
{
  node *temp=head1;
  while(temp->next!=NULL){
    temp=temp->next;
  }
 temp->next=head2;
}

void swap(node *p1, node*p2)
{
	int temp = p1->data;
	p1->data = p2->data;
	p2->data = temp;
}
 

void sort1()
{
  node *temp1=head1;
  node *min;
  node *temp2;
  int temp;
  while(temp1->next!=NULL)
  {
    min=temp1;
    temp2=temp1->next;
     while(temp2!=NULL)
     {
       if(min->data>temp2->data){
          min=temp2;
       }
    temp2=temp2->next;
     }
     swap(temp1,min);
     temp1=temp1->next; 
  }
}

void sort2()
{
  node *temp1=head2;
  node *min;
  node *temp2;
  int temp;
  while(temp1->next!=NULL)
  {
    min=temp1;
    temp2=temp1->next;
     while(temp2!=NULL)
     {
       if(min->data>temp2->data){
          min=temp2;
       }
    temp2=temp2->next;
     }
     swap(temp1,min);
     temp1=temp1->next; 
  }
}


void main()
{
    
    int option,ele;

    do
	{
	    printf("\n****MAIN MENU****\n");
		printf("1.Insert to list 1\n");
		printf("2.Insert to list 2\n");
		printf("3.Display both lists \n");
                printf("4.Reverse both lists \n");
		printf("5.Sort both lists\n");
                printf("6.merge\n");
                printf("7..Quit\n");

		printf("Enter your option : ");
		scanf("%d",&option);

		switch(option)
		{
			case 1 :
				printf("Input the element to list 1: ");
				scanf("%d", &ele);
                                insert_front1(ele);
				break;
			case 2 :
				printf("Input the element to list 2: ");
				scanf("%d", &ele);
				insert_front2(ele);
				break;
			case 3:display1();
				display2();
				break;
			case 4:reverse1();
                               reverse2();
				break;
			case 5:sort1();
                               sort2();
				break;
			case 6:merge();
                               display1();
				break;
                        case 7:break;

				default:
				printf("Wrong choice\n");
		}
    }while(option!=7);

}
