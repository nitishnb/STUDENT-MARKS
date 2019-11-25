#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node* lchild;
	struct node* rchild;
}node;

struct node* create(int n)
{
	struct node* p;
	p=(node*)malloc(sizeof(node));
	p->data=n;
	p->lchild=NULL;
	p->rchild=NULL;
	return p;
}

struct node* insert(struct node* root, int data)
{
	if(root==NULL)
	{
		root=create(data);
		return;
	}
	if(data<=root->data)
	root->lchild=insert(root->lchild,data);
	else
	root->rchild=insert(root->rchild,data);	
	return root;
}

int search(struct node* root, int data)
{
	if(root==NULL)
	{printf("Empty tree");
	 return;
	}
	if(data==root->data)
		return 1;
	else if(data<root->data)
		return search(root->lchild,data);
	else
		return search(root->rchild,data);
}

void preorder(struct node* root)
{
	if(root==NULL)
		return;
	printf("%d\t",root->data);
	preorder(root->lchild);
	preorder(root->rchild);
}

void main()
{
    int i;
	struct node* root=NULL;
	root=insert(root,20);
	root=insert(root,15);
	root=insert(root,19);
	printf("\nPreorder :\n");
	preorder(root);
	root=insert(root,33);
	root=insert(root,11);
	printf("\nPreorder :\n");
	preorder(root);
	i=search(root,15);
	if(i==1)
	printf("\nTRUE\n",i);
	else printf("FALSE\n");
	i=search(root,33);	
	if(i==1)
	printf("TRUE\n",i);
	else printf("FALSE\n");
}