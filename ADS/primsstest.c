#include<stdio.h>
#include<limits.h>

#define MAX 20
void prim(int n,int cost[MAX][MAX],int t[MAX - 1][2],int* totalCost)
{
  int near[MAX];
  int min,u,v;
  for(int i=1;i<n;i++)
  {
    near[i]=0;
  }
  near[0]=1;
  *totalCost=0;
  for(int i=1;i<n;i++)
  {
    min=INT_MAX;
    u=v=-1;
    for(int j=0;j<n;j++)
    {
      if(near[j]!=0)
      {
        for(int k=0;k<n;k++)
        {
          if(near[k]==0 && cost[j][k]!=0 && cost[j][k]<min)
          {
            u=j;
            v=k;
            min=cost[j][k];
          }
        }
      }
    }
    if(u==-1 || v== -1)
    {
      break;
    }
    t[i-1][0]=u;
    t[i-1][1]=v;
    near[v]=1;
    *totalCost+=min;
   }
}

int main()
{
  int n,cost[MAX][MAX],t[MAX - 1][2],totalCost;
  printf("Enter the number of vertices:");
  scanf("%d",&n);
  printf("Enter the cost matrix:\n");
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
        printf("cost[%d][%d]",i+1,j+1);
        scanf("%d", &cost[i][j]);
            if (cost[i][j] == 0) 
            {
                cost[i][j] = INT_MAX;
            }
    }
  }

prim(n,cost,t,&totalCost);
printf("Minimum Spanning tree edges:\n");
for (int i = 0; i < n - 1; i++) 
    {
        printf("(%d, %d)\n", t[i][0] + 1, t[i][1] + 1);
    }

printf("Total Minimum Cost: %d\n", totalCost);

    return 0;
}

