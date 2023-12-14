#include<stdio.h>
int main()
{
  int visited={0,0,0,0,0,0,0,0,0,0},adj[10][10],v,i,j,k,flag,visit,count=0;
  printf("Enter the vertices:");
  scanf("%d",&v);
  printf("Enter the adjacency matrix:");
  for(i=0;i<v;i++)
  {
    for(j=0;j<v;j++)
    {
      scanf("%d",&adj[i][j]);
    }
  }
  
  for(visit=0;visit<v;)
  {
   count++;
    if(count>100)
    {
      printf("Graph is a cycle.......exiting.......\n");
      return 0;
    }
    for(i=1;i<v;i++)
    {
      if(visited[i]!=0)
      {
        flag=0;
        for(j=0;j<k;j++)
        {
          if(adj[j][i]==1)
          {
            flag=1;
          }
        }
          if(flag==0)
          {
            printf("%d->",i);
            visited=1;
            visit++;
            
            for(k=0;k<v;k++)
            {
              adj[i][k]==0;
            }
          }
      }
    }
  }
  
 return 0;
}
