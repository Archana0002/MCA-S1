#include<stdio.h>
#include<stdlib.h>
struct node
{
   struct node *lchild;
   struct node *rchild;
   int data;
};

struct node *root=NULL,*r=NULL,*rt,*t1,*tp,*n;
void create()
{
   
   int v;
   n=(struct node *)malloc(sizeof(struct node));
   printf("\nEnter value to insert:");
   scanf("%d",&v);
   n->data=v;
   n->lchild=NULL;
   n->rchild=NULL;
}

void search(struct node *rt)
{
   if(n->data<rt->data && rt->lchild==NULL)
    rt->lchild=n;
   else if(n->data > rt->data && rt->rchild==NULL)
    rt->rchild=n;
   else if(n->data < rt->data && rt->lchild!=NULL)
    search(rt->lchild);
   else if(n->data > rt->data && rt->rchild!=NULL)
    search(rt->rchild);
   else if(n->data==rt->data)
    printf("\nSame value entered twice:");
   else
    printf("\nInvalid");
}

void insert()
{
  create();
  if(root==NULL)
   root=n;
  else
   search(root);
}



void deletenode(struct node *rt)
{
  if(r==NULL)
  r=rt;
  if(rt->lchild==NULL && rt->rchild==NULL)
  {
    if(rt==r->lchild)
     r->lchild=NULL;
    else if(rt==r->rchild)
     r->rchild=NULL;
    else
     printf("\nInvalid");
    if(root==rt)
     root=NULL;
    free(rt);
  }
  else if(rt->lchild!=NULL && rt->rchild==NULL)
  {
    if(rt==r)
    {
      root=rt->lchild;
    }
    else if(rt==r->lchild)
    {
      r->lchild=rt->lchild;
    }
    else if(rt==r->rchild)
    {
      r->rchild=rt->rchild;
    }
    else
      printf("\nInvalid");
    free(rt);
   }
   else if(rt->lchild==NULL && rt->rchild!=NULL)
   {
     if(rt==r)
     {
       root=rt->rchild;
     }
     else if(rt==r->lchild)
     {
       r->lchild=rt->rchild;
     }
     else if(rt==r->rchild)
     {
       r->rchild=rt->rchild;
     }
     else
       printf("\nInvalid value");
     free(rt);
   }
   
  else if(rt->lchild!=NULL && rt->rchild!=NULL)
  {
    t1=rt->rchild;
    if(t1->rchild!=NULL)
    {
      tp=rt;
      while(t1->lchild!=NULL)
      {
        tp=t1;
        t1=t1->lchild;
      }
      rt->data=t1->data;
      if(t1->rchild!=NULL)
        tp->rchild=t1->rchild;
      if(tp!=rt)
      tp->lchild=NULL;
      free(t1);
    }
    else
    {
      rt->data=t1->data;
      if(t1->lchild!=NULL)
        rt->rchild=t1->lchild;
      else
        rt->rchild=NULL;
      free(t1);
    }
  }
  else
    printf("\nInvalid value:");
}


void dsearch(struct node *rt,int dval)
{
  if(rt->data==dval)
  {
    deletenode(rt);
  }
  else if(dval<rt->data&&rt->lchild!=NULL)
  {
    r=rt;
    dsearch(rt->lchild,dval);
  }
  else if(dval>rt->data && rt->rchild!=NULL)
  {
    r=rt;
    dsearch(rt->rchild,dval);
  }
  else
    printf("\nValue not found!");
}

void deleting()
{
  int dval;
  printf("Enter the node to be deleted:");
  scanf("%d",&dval);
  if(root==NULL)
    printf("\n The BST is Empty");
  else
    dsearch(root,dval);
}

void preorder(struct node *root)
{
  if(root!=NULL)
  {
    printf("-%d-",root->data);
    preorder(root->lchild);
    preorder(root->rchild);
  }
}

void inorder(struct node *root)
{
  if(root!=NULL)
  {
    inorder(root->lchild);
    printf("-%d-",root->data);
    inorder(root->rchild);
  }
}

void postorder(struct node *root)
{
  if(root!=NULL)
  {
    postorder(root->lchild);
    postorder(root->rchild);
    printf("-%d-",root->data);
  }
}

void display()
{
  printf("\n preorder: \t");
  preorder(root);
  printf("\ninorder:\t");
  inorder(root);
  printf("\n postorder:\t");
  postorder(root);
}

int main()
{
  int ch;
  printf("Choose a Binary search tree operation: \n 1.Insertion \n 2.Deletion \n 3.Display \n 4.Exit");
  while(1)
  {
    printf("\nEnter a choice:");
    scanf("%d",&ch);
    switch(ch)
    {
     case 1:insert();
     	     break;
     case 2:deleting();
            break;
     case 3:display();
            break;
     case 4:exit(0);
            break;
     default:printf("invalid value:");
            break;
    }
   }
  return 0;
  
}
     
     
