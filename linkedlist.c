#include<stdio.h>
struct node
{
 int data;
 struct node* link;
};
void insertion(struct *head,int pos,int X)
{
 struct node*newnode;
 newnode=(struct node*)malloc(sizeof(struct node));
 if(newnode==NULL)
 {
  printf("no space");
 }
 int temp;
 temp=head;
 count=0;
 while(temp->link!=NULL)
 {
  temp=temp->link;
  count=count+1;
 }
 if(pos>count+1||pos<1)
 {
  printf("pos is invalid");
 }
 newnode->data=X;
 if(pos==1)
 {
  newnode->link=head;
  head=newnode;
 }
  
       
  
