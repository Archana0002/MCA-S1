#include<stdio.h>
int main()
{
 int i,n,item,a[100],flag=0;
 printf("Enter the size of array:");
 scanf("%d",&n);
 printf("Enter the elements:");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("Enter the item to search:");
 scanf("%d",&item);
 for(i=0;i<n;i++)
 {
  if(a[i]==item)
  {
   printf("\n element found at position:%d",i+1);
   flag=1;
   break;
  }
 }
 if(flag==0)
 {
  printf("\nUnsuccessfull search:");
 }
}
