// Dijkstra's Algorithm

#include<stdio.h>

int main()
{
    int a[10][10],i,j,n,source[10];

    printf("Enter the number of edges:");
    scanf("%d",&n);

    printf("Enter the matrix:");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }

    for(i=0;i<n;i++)
        source[i]=0;

    printf("Enter the source:");
    scanf("%d",&source);

    int cost[10][10],dist[10],path[10],s,visited[10],count,m_dist,next;

  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(a[i][j]==0)
        cost[i][j]=999;
      else
        cost[i][j]=a[i][j];
    }
  }

  for(i=0;i<n;i++)
    {
        dist[i]=cost[s][i];
        path[i]=s;
        visited[i]=0;
    }

    dist[s]=0;
    visited[s]=1;
    count=1;

  while(count<n-1)
    {
    m_dist=999;

    for(i=0;i<n;i++)
    {
      if(dist[i]<m_dist&&!visited[i])
     {
        m_dist=dist[i];
        next=i;
      }
    }

    visited[next]=1;

    for(i=0;i<n;i++)
    {
      if(!visited[i])
      {
        if (m_dist+cost[next][i]<dist[i])
            {
                dist[i]=m_dist+cost[next][i];
                path[i]=next;
            }
      }
    }
    count++;
    }

  for(i=0;i<n;i++)
    if(i!=s)
      printf("\nDistance from source to %d: %d",i,dist[i]);

  return 0;
}
