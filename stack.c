#include<stdio.h>
void push(void);
void pull(void);
int main()

{
  int stack[100],top=-1;
  int n,choice;
  printf("enter the number of elements in the stack");
  scanf("%d",&n);
  printf("enter the option what u want to do\n");
  printf("1)push anything\n 2)pop anything\n");
  scanf("%d",&choice);
  switch(choice)
    {
    case 1:push();
      break;
    case 2:pull();
      break;
    default:printf("enter  a valid option");
    }
  void push(void)
  {
    if(top<n-1)
      {
	printf("stack has undergone a overfall");
      }
    else
      {
	int num;
	printf("enter the element to be inserted");
	scanf("%d",&num);
	top+=1;
	stack[top]=num;
      }
  }
  void pull(void)
  {
    if(top>-1)
      {
	top-=1;
      }
    else
      {
	printf("stack has undergone a underflow");
      }
  }
  return 0;
}
     
           
    
    
