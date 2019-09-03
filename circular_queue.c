# include<stdio.h>
# define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

int main()
{
	int option,ele;
	do
	{
	    printf("\n****MAIN MENU****\n");
		printf("1.Insert an element\n");
		printf("2.Delete an element\n");
		printf("3.Display the circular queue\n");
		printf("4.Quit\n");

		printf("Enter your option : ");
		scanf("%d",&option);

		switch(option)
		{
			case 1 :
				printf("Input the element for insertion in queue : ");
				scanf("%d", &ele);

				insert(ele);
				break;
			case 2 :
				delete();
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
	
	return 0;
}
void insert(int ele)
{
	if((front == 0 && rear == MAX-1) || (front == rear+1))
	{
		printf("Queue Overflow \n");
		return;
	}
	if (front == -1)
	{
		front = 0;
		rear = 0;
	}
	else
	{
		if(rear == MAX-1)	
			rear = 0;
		else
			rear = rear+1;
	}
	queue[rear] = ele ;
}
void delete()
{
	if (front == -1)
	{
		printf("Queue Underflow\n");
		return ;
	}
	printf("Element deleted from queue is : %d\n",queue[front]);
	if(front == rear) 
	{
		front = -1;
		rear=-1;
	}
	else
	{	
		if(front == MAX-1)
			front = 0;
		else
			front = front+1;
	}
}
void display()
{
   int f= front,r = rear;
	if(front == -1)
	{
		printf("Queue is empty\n");
		return;
	}
	printf("Queue elements :\n");
	if( f<= r )
		while(f <= r)
		{
			printf("%d ",queue[f]);
			f++;
		}
	else
	{
		while(f<= MAX-1)
		{
			printf("%d ",queue[f]);
			f++;
		}
		f = 0;
		while(f<=r)
		{
			printf("%d ",queue[f]);
			f++;
		}
	}
	printf("\n");
}