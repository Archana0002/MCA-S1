#include<stdio.h>
int main()
{
 int i,item,n,high,low=0,mid,a[100],flag=0;
 printf("Enter the size of array:");
 scanf("%d",&n);
 printf("Enter the elements:");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("Enter the item to search:");
 scanf("%d",&item);
 high=n-1;
 while(low<=high)
 {
  mid=(low+high)/2;
  if(a[mid]==item)
  {
   printf("element found at position:%d",mid+1);
   flag=1;
   break;
  }
  else if(a[mid]>item)
  {
   high=mid-1;
  }
  else
  {
   low=mid+1;
  }
 }
 if(flag==0)
 {
  printf("\n Unsuccesssfull search ");
 }
return 0;
}
   
