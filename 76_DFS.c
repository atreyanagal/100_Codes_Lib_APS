//DSF using recursive

#include<stdio.h>
int v=5,m[5][5]={{1,0,0,1,1},{1,0,1,0,1},{1,0,1,0,1},{1,1,1,0,1},{1,0,0,0,1}},i, source=4,visited[10];

void DFS(int m[5][5],int v, int source)
{
    visited[source]=1;

    for(i=0;i<v;i++)
    {
        if(m[source][i]==1&&visited[i]==0)
        {
            printf("%d\t",i);
            DFS(m,v,i);
        }
    }
}

int main()
{
    for(i=0;i<v;i++)
        visited[i]=0;

    printf("The DFS traversal is:\n%d\t",source);

    DFS(m,v,source);

    return 0;
}
