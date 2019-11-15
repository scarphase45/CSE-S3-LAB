#include<stdio.h>
#define max 20
int a[max];
void swap(int a,int b)
{
 int temp;
 temp=a;
 a=b;
 b=temp;
}
int partition(int lb,int ub)
{
 int pivot,left,right;
 pivot=a[lb];
 left=lb;
 right=ub;
 while(left<right)
 {
  while((a[left]<=pivot)&&(left<right))
   left++;
  while((a[right]>pivot)&&(left<right))
   right--;
  if(left<right)
   swap(a[left],a[right]);
 }
 swap(a[lb],a[right]);
 printf("%d%d",a[right],a[lb]);
 return right;
}

void quicksort(int lb,int ub)
{
 int p;
 if(lb<ub)
 {
  p=partition(lb,ub);
  quicksort(lb,p-1);
  quicksort(p+1,ub);
 }
}
int main(void)
{
 int n;
 printf("\nEnter the size of the array:");
 scanf("%d",&n);
 printf("\nEnter the elements:");
 for(int i=0;i<n;i++)
  scanf("%d",&a[i]);
 quicksort(0,n-1);
 printf("\nSorted array:\n");
 for(int i=0;i<n;i++)
  printf("\t%d",a[i]);
 printf("\n");
}


