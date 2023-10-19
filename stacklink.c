#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *next;
 };
 struct node *head=NULL;
 struct node dupe;
 void intend()
  {
   int data;
   struct node *ptr,*temp;
   printf("\n Enter the value(end):");
   scanf("%d",&data);
   temp=(struct node*)malloc(sizeof(dupe));
   temp->data=data;
   temp->next=NULL;
   if(head==NULL)
   {
    head=temp;
    }
    else
    {
     ptr=head;
     while(ptr->next!=NULL)
     {
      ptr=ptr->next;
      }
      ptr->next=temp;
      }
     }
 //void intstrt()
 /**{
  int data;
  struct node *ptr,*temp;
  printf("Enter the input:");
  scanf("%d",&data);
  temp=(struct node*)malloc(sizeof(dupe));
  temp->data=data;
  temp->next=head;
  head=temp;
  }**/
  void display()
      {
       int i=1;
       struct node *ptr;
       ptr=head;
       if(ptr!=NULL)
       {
        while(ptr->next!=NULL)
        {
         printf("%d th element\t %d \n",i,ptr->data);
         ptr=ptr->next;
         i++;
         }
         printf("%d th element\t %d \n",i,ptr->data);
         }
         else
         {
          printf("\n linked list is empty:\n");
          }
         }
  void dltend()
        {
         struct node *dlt,*pre;
         pre=NULL;
         dlt=head;
         int i;
         if(dlt!=NULL)
         {
           while(dlt->next!=NULL)
           {
            pre=dlt;
            dlt=dlt->next;
            i++;
            }
            }
             printf("\n deleting %d th element %d",i,dlt->data);
         if(dlt==head) 
         {
          head=NULL;
          free(dlt);
          }
          else
          {
           printf("empty linkedlist");
          }
        }    
    int main()
    {
     int c;        
do
    {
     printf("\n1.insert  the value\n2.display\n3.delete the value\n4.exit\n");
     printf("enter ur choice:");
     scanf("%d",&c);
     if(c==1)
     {
      //intstrt();
      intend();
      }
        if(c==2)     
         {
           display();
         
         }
         if(c==3)     
         {
           dltend();
         
         }
         if(c==4)  
         {
         printf("exit");
         
         } 
       }while(c<4);  
       }
            
                      
