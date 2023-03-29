//Program to implement Kruskal's algorithm

#include<stdio.h>
#include<stdlib.h>

struct graph
{
    int u,v,w;
};

struct graph grh;
grh g[30];

void union1(int ar[30],int n,int a,int b)
{
    int i,t;
    t=ar[30];

    for(i=0;i<n;i++)
    {
        if(ar[i]==t)
            ar[i]=ar[b];
    }
}

int find(int ar[30],int a,int b)
{
    if(ar[a]==ar[b])
        return 1;
        else return 0;
}

void sort(grh g[10],int m)
{
    int i,j,t;

    for(i=0;i<=e-2;i++)
        {
           for(j=0;j<=e-i-2;j++)
           {
               if(g[j].w>g[j+1].w)
               {
                   t=g[j].w;
                   g[j].w=g[j+1].w;
                   g[j+1].w=t;

                   t=g[j].u;
                   g[j].u=g[j+1].u;
                   g[j+1].u=t;

                   t=g[j].v;
                   g[j].v=g[j+1].v;
                   g[j+1].v=t;
               }
           }
        }

        for(k=0;k<m;i++)
        {
            printf("[%d,%d]%d",g[k].u,g[k].v,g[k].w);
        }
}

int main()
{
    int m,i;
    printf("Enter the number of edges:");
    scanf("%d",&m);

    for(i=0;i<m;i++)
    {
        printf("Enter the vertex 1, vertex 2 and weight:");
        scanf("%d%d%d",&g[i].u,&g[i].v,&g[i].w);
    }

    sort(g,m);
    return 0;

}