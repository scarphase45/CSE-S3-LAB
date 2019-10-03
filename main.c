#include<stdio.h>
int stack[100],top=-1,n,choice,j;
void push(void);
void pull(void);
int main()
{
  top=-1;
  printf("enter the number of elements in the stack\n");
  scanf("%d",&n);
  printf("1)push anything\n2)pop anything\n3)exit\n4)display the stack\n");
  do
  {
printf("enter the option");
  scanf("%d",&choice);
  switch(choice)
    {
    case 1:

               if(top>n-1)
      {
	     printf("stack has undergone a overfall\n");
      }
      else
       {
	      int num;
          printf("enter the element to be inserted\n");
	      scanf("%d",&num);
          top=top+1;
	      stack[top]=num;
            break;
        }
    case 2:

             if(top>=-1)
      {
    printf("the element to be deleted is %d",stack[top]);
	top--;
      }
    else
      {
	printf("stack has undergone a underflow\n");
      }
            break;
    case 3: break;
    case 4:
        for(j=top;j>=0;j--)
  {
      printf("%d\n",stack[j]);
  }
  break;
    default:
        {
        printf("enter  a valid option\n");
        }
    }
  }
  while(choice!=3);
  int j;
  for(j=top;j>=0;j--)
  {
      printf("%d\n",stack[j]);
  }
  return 0;
}
