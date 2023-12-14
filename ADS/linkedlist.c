#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct node *head=NULL;



void ins_strt()
{
int data;
struct node *temp;
printf("Enter the value to input:");
scanf("%d",&data);
temp=(struct node *)malloc(sizeof(struct node));
temp->data=data;
temp->next=head;
head=temp;
}


void ins_end()
{
int data;
struct node *ptr,*temp;
printf("Enter the value to input:");
scanf("%d",&data);
temp=(struct node *)malloc(sizeof(struct node));
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



void ins_pos()
{
int data,pos,i;
struct node *ptr,*swap,*temp;
printf("Enter the value to input:");
scanf("%d",&data);
printf("Enter the position:");
scanf("%d",&pos);
pos=pos-1;
temp=(struct node *)malloc(sizeof(struct node));
temp->data=data;
temp->next=NULL;
if(head==NULL)
{
head=temp;
}
else
{
ptr=head;
for(i=0;i<(pos-1)&&(ptr->next!=NULL);i++)
{
printf("%d",ptr->data);
ptr=ptr->next;
}
if(i==pos-1)
{
swap=ptr->next;
ptr->next=temp;
temp->next=swap;
}
else
{
printf("Invalid pos");
}
}
}



 


void display()
{
int i=1;
struct node *ptr;
ptr=head;
if(ptr!=NULL)
{
while(ptr->next!=NULL)
{
printf("%d th element \t%d\n",i,ptr->data);
ptr=ptr->next;
i++;
}
printf("%d th element \t %d \n",i,ptr->data);
}
else
{
printf("\n linked list is empty \n");
}
}




void dlt_end()
{
 struct node *dlt,*pre;
 pre=NULL;
 dlt=head;
 int i=1;
 if(dlt!=NULL)
 {
  while(dlt->next!=NULL)
  { 
   pre=dlt;
   dlt=dlt->next;
   i=i+1;
  }
  printf("\n deleting %dth element %d",i,dlt->data);
  if(dlt==head)
  {
   head=NULL;
   free(dlt);
  }
  else
  {
   pre->next=NULL;
  }
 }
 else
 {
  printf("linked llist is empty");
 }
}


void dlt_pos()
{
 int pos,i=1;
 struct node *dlt,*pre;
 dlt=head;
 printf("Enter the position of element to be deleted:");
 scanf("%d",&pos);
 if(dlt!=NULL)
 {
  while(dlt->next!=NULL && i<(pos))
  {
   i++;
   pre=dlt;
   dlt=dlt->next;
   printf("\n %d %d",i,dlt->data);
  }
  if(i==pos&&dlt==head)
  {
   head=dlt->next;
   printf("head is changed");
   printf("\n the deleting elements is %d the value %d",i,dlt->data);
   free(dlt);
  }
  else if(i==pos)
  {
   pre->next=dlt->next;
   printf("\n the deleting eleemnt is %d the value %d",i,dlt->data);
   free(dlt);
  }
  else
  printf("invalid position");
 }
}
 

void dlt_strt()
{
 struct node *dlt;
 dlt=head;
 if(dlt!=NULL)
 {
  head=dlt->next;
  printf("\n deleted eleemnt is %d \n",dlt->data);
 }
}




int main()
{
int choice;
do
{
printf("\n1.insert at start \n2.INsert at end \n3.Insert at position \n4.Display \n5.Delete from end \n6.Delete at position \n7.Delete at start \n10.Exit");
printf("\nEnter your choice:");
scanf("%d",&choice);
switch(choice){
case 1:ins_strt();
       break;
case 2:ins_end();
       break;
case 3:ins_pos();
       break;
case 4:display();
       break;
case 5:dlt_end();
       break;
case 6:dlt_pos();
       break;
case 7:dlt_strt();
       break;
case 10:printf("\nExiting");
        break;
default:printf("Invalid");
}

}
while(choice!=10);

return 0;
}

