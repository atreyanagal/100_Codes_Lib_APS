//Program to implement merge sort

#include<stdio.h>

void readArray(int A[],int n)
{
    printf("Enter the elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
}

void merge(int A[],int mid,int low,int high)
{
    int i,j,k,B[100];

    i=low;
    j=mid+1;
    k=low;

    while(i<=mid&&j<=high)
    {
        if(A[i]<A[j])
        {
            B[k]=A[i];
            i++;
            k++;
        }
        else
        {
            B[k]=A[j];
            j++;
            k++;
        }
    }

    while(i<=mid)
    {
        B[k]=A[i];
            k++;
            i++;
    }

    while(j<=high)
    {
        B[k]=A[j];
            k++;
            j++;
    }

    for(int i=low;i<=high;i++)
    {
        A[i]=B[i];
    }
}

void merge_sort(int A[],int low,int high)
{
    int mid;

    if(low<high)
    {
    mid=(low+high)/2;

    merge_sort(A,low,mid);
    merge_sort(A,mid+1,high);
    merge(A,mid,low,high);
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
    merge_sort(A,0,n-1);
    printArray(A,n);

    return 0;
}
