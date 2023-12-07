#include<stdio.h>
int top=-1,item;
int adj[10][10],stack[10],n,s;
int visited[10]={0,0,0,0,0,0,0,0,0,0};

void push(int item)
{
  if(top==9)
  {
    printf("stack is full");
  }
  else
  {
    if(top==-1)
    {
      top=0;
      stack[top]=item;
    }
    else
    {
      top=top+1;
      stack[top]=item;
    }
  }
}

int pop()
{
  int k;
  if(top==-1)
  {
    return (0);
  }
  else 
  {
    k=stack[top];
    top--;
    return (k);
  }
}

void dfs(int s,int n)
{
  int p,i;
  push(s);
  visited[s]=1;
  p=pop();
  if(p!=0)
  {
    printf("%d\t",p);
  }
  while(p!=0)
  {
    for(i=1;i<=n;i++)
    {
      
        if(adj[p][i]==1 && visited[i]==0)
        {
          push(i);
          visited[i]=1;
        }
      }
    
     p=pop();
     if(p!=0)
     {
       printf("%d\t",p);
       
     }
   }
 
}


int main()
{
  int i,j;
  printf("Enter the number of vertices:");
  scanf("%d",&n);
  printf("Enter the adjacency matrix:\n");
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
    {
      scanf("%d",&adj[i][j]);
    }
  }
  printf("Enter tje starting vertex:");
  scanf("%d",&s);
  dfs(s,n);
  return 0;
}
  

