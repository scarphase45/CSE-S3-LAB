#include<stdio.h>
#define max 10
int top=-1;
char ar[max];
int st[max];
int exp[max];
void precedence(char ch)
{
	switch(ch)
	{
		case '+':
		case '-':return 1;
			break;
		case '*':
		case '/':return 2;
			break;
		case '^':return 3;
			break;
		default: return 0;
	}
}
void push(	
void convertion(int char[max])
{	
	int i;
	if(top==max)
	{
		printf("stack overflow");
	}
	for(i=0;i<='/0';i++)
		if(isalphanum(ar[i]!=1))
		{
		exp[i]=ar[i];
		}
		else
		{		
			
	   		st[i]=ar[i];
		}
		
}











int main()
{
	int i;	
	char ch;
	printf("enter the value to be evaluated");
	for(i=0;i<max;i++)
	{
		ch=scanf("%c",&ar[i]!=EOF);
		scanf("%d",&ar[i]);
	}
	presedence(ch);
	
}
