#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*link;
};
struct node*top;
struct node*temp;
void push (int data)
{
	struct node*newnode=(struct node*)malloc(sizeof(struct node));
	if(top==NULL)
	{
		newnode->data=data;
		newnode->link=NULL;
		top=newnode;
	}
	else
	{
		newnode->data=data;
		newnode->link=top;
		top=newnode;
	}
}
void pop()
{
	if(top==NULL)
	{
		printf("stack is empty");
	}
	else
	{
		temp=top;
		top=top->link;
		free(temp);
	}
}
void display()
{ 
        temp=top;
	if(temp==NULL)
		printf("empty stack");
	while(temp!=NULL)
	{
		printf("%d \t",temp->data);
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
          push(data);break;
   case 2:pop();break;
   case 3:display();break;
   default:printf("\n Invalid Choice");
  }
 }
}

