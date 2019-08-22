#include<stdio.h>
int linearsearch(int* b,int a,int n)
{
 int d;
 for(int i=0;i<=n;i++)
 {
  if(b[i]==a)
  {
   d=i+1;
   return d;
  }
 }
   return 0;
}
     
int main()
{
 int n,a,i,b[50],d;
 printf("enter the element to be searched");
 scanf("%d",&a);
 printf("enter the array limit");
 scanf("%d",&n);
 printf("enter the array");
 for(i=0;i<n;i++)
 {
  scanf("%d",&b[i]);
 }
 d=linearsearch(b,a,n);
 if(d>0)
 {
  printf("the element is found at the position %d",d);
 }
 else
  printf("element not found");
}




