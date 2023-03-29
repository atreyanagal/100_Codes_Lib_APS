//Program to implement Warshall's algorithm

#include<stdio.h>

void readarray(int R[100][100],int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            scanf("%d",&R[i][j]);
    }
}

int Warshall(int R[100][100],int n)
{
    int i,j,k;

    for(k=1;k<=n;k++)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                R[i][j]=(R[i][j]||(R[i][k]&&R[k][j]));
            }
        }
    }

    return R[i][j];
}

void printarray(int R[100][100],int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            printf("%d ",R[i][j]);
        printf("\n");
    }
}

int main()
{
    int n,R[100][100],w;
    printf("Enter the size of matrix=");
    scanf("%d",&n);
    readarray(R,n);
    w=Warshall(R,n);
    printf("Transitive property:\n");
    printarray(R,n);

    return 0;
}
