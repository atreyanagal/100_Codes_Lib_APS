//Program to implement Floyds algorithm

#include<stdio.h>
#define inf 999

void readarray(int D[100][100],int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            scanf("%d",&D[i][j]);
    }
}

int Floyd(int D[100][100],int n)
{
    int i,j,k;

    for(k=1;k<=n;k++)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(D[i][k]+D[k][j]<D[i][j])
                  D[i][j]=D[i][k]+D[k][j];
            }
        }
    }

    return D[i][j];
}

void printarray(int D[100][100],int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            printf("%d ",D[i][j]);
        printf("\n");
    }
}

int main()
{
    int n,D[100][100],f;
    printf("Enter the size of matrix=");
    scanf("%d",&n);
    readarray(D,n);
    f=Floyd(D,n);
    printf("Transitive property:\n");
    printarray(D,n);

    return 0;
}
