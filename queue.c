#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int arr[MAX];
int front=-1,rear=-1;
void enqueue(int data)
{
	if(rear==MAX-1)
	{
		printf("queue overflow");
	}
	else if(front==-1 && rear==-1)
	{
		rear=rear+1;
		front=front+1;
		arr[rear]=data;
	}
	else
	{
		rear=rear+1;
		arr[rear]=data;
	}
}
void dequeue()
{
	int data;
	if(front==-1 || front>rear)
	{
		printf("queue is empty");
	}
	else 
	{
		data=arr[front];
		printf("the element dequed is%d",data);
		front=front+1;
	}
}
void display()
{
	int i;
	if(front==-1 || front>rear)
	{
		printf("empty queue");
	}
	else
	{
		for(i=front;i<=rear;i++)
		{
			printf("\t %d",arr[i]);
		}
	}
}
int main()
{
	printf("\n \t\t MENU \n\t1.enqueue\n\t2.dequeue\n\t3.DISPLAY\n\t4.EXIT");
 int ch,data;
 while(1)
 {
  printf("\nEnter your choice:");
  scanf("%d",&ch);
  if(ch==4)
   break;
  switch(ch)
  {
   case 1:printf("\nEnter the element to be enqued:");
          scanf("%d",&data);
          enqueue(data);break;
   case 2:dequeue();break;
   case 3:display();break;
   default:printf("\n Invalid Choice");
  }
 }
}

