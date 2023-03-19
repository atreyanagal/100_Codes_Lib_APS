//Program to implement heap sort

#include<stdio.h>

void readArray(int A[],int n)
{
    printf("Enter the elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
}

void max_heapify(int A[],int n,int i)
{
    int lar=i;
    int l=(2*i)+1;
    int r=(2*i)+2;

    if(l<n && A[lar]<A[l])
    {
        lar=l;
    }

    if(r<n && A[lar]<A[r])
    {
        lar=r;
    }

    if(lar!=i)
    {
        int temp;
        temp=A[lar];
        A[lar]=A[i];
        A[i]=temp;

        max_heapify(A,n,lar);
    }
}

void heap_sort(int A[],int n)
{
    int i;
    for(i=(n/2)-1;i>=0;i--)
    {
        max_heapify(A,n,i);
    }

    for(i=n-1;i>0;i--)
    {
        int temp;

        temp=A[i];
        A[i]=A[0];
        A[0]=temp;

        max_heapify(A,i,0);
    }
}

void printArray(int A[],int n)
{
    printf("Elements after sorting:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}

int main()
{
    int i,n,A[100];

    printf("Enter the number of elements=");
    scanf("%d",&n);

    readArray(A,n);
    heap_sort(A,n);
    printArray(A,n);

    return 0;
}