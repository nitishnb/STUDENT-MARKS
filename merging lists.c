#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

typedef struct node
{
  char s[6];
  struct node *next;
}node;

node* head1=NULL;
node* head2=NULL;

void insert1();
void insert2();
void reverse();
void mergelist();

void main()
{
 int i=0;
 char a[6];
 printf("Enter list1: {");
 while(i<8)
 {
  insert1();
  i++;
 }
 printf("}");
 printf("Enter list2: {");
 i=0;
 while(i<8)
 {
  insert2();
  i++;
  }
   printf("}");
 reverse();
 mergelist();
 getch();
}

void insert1()
 {
  node *temp;
  temp=(node*)malloc(sizeof(node));
  scanf("%s",temp->s);
  temp->next=0;
   if(head1==0)
    head1=temp;
   else
    {
     node *temp1=head1;
     while((temp1->next)!=0)
      {
        temp1=temp1->next;
      }
    temp1->next=temp;
    }
 }

void insert2()
 {
  node *temp;
  temp=(node*)malloc(sizeof(node));
  scanf("%s",temp->s);
  temp->next=0;
   if(head2==0)
    head2=temp;
   else
    {
     node *temp1=head2;
     while((temp1->next)!=0)
      {
        temp1=temp1->next;
      }
    temp1->next=temp;
    }
 }

void reverse()
{
 node *prev=NULL;
 node *next=NULL;
 node *cur=head2;
 while(cur!=NULL)
 {
   next=cur->next;
   cur->next=prev;
   prev=cur;
   cur=next;
 }
 head2=prev;
}


void mergelist()
{
    node *temp1=head1;
    node *temp2=head2;
 while(temp1!=NULL)
 {
     if(temp2->s=='NONE')
       printf("%s",temp1->s);
     else
     {
     printf("%s%s ",temp1->s,temp2->s); 
     temp1=temp1->next;
     temp2=temp2->next;
     }
}
}
