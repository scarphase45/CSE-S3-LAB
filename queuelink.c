#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*link;
};
struct node*front;
struct node*rear;
struct node*temp;
void enqueue (int data)
{
	struct node*newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->link=NULL;
	if(front==NULL || rear==NULL)
	{
		front=newnode;
		rear=newnode;
	}
	else
	{
		rear->link=newnode;
		rear=newnode;
	}
}
void dequeue()
{
	if(front==NULL || rear==NULL)
	{
		printf("empty queue");
	}
	else
	{
	temp=front;
	front=temp->link;
	free(temp);
	}
}
void display()
{
	temp=front;
	if(temp==NULL || rear==NULL){
	printf("empty queue");
	}	
	else
	while(temp!=NULL)
	{
		printf("%d \t ",temp->data);
		temp=temp->link;
	}
}
int main()
{
	printf("\n \t\t MENU \n\t1.PUSH\n\t2.POP\n\t3.DISPLAY\n\t4.EXIT");
 int ch,data;
 while(1)
 {
  printf("\nEnter your choice:");
  scanf("%d",&ch);
  if(ch==4)
   break;
  switch(ch)
  {
   case 1:printf("\nEnter the element to be pushed:");
          scanf("%d",&data);
          enqueue (data);break;
   case 2:dequeue();break;
   case 3:display();break;
   default:printf("\n Invalid Choice");
  }
 }
}

		
		

