//Program to implement quick sort

#include<stdio.h>

void readArray(int A[],int n)
{
    printf("Enter the elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
}

int partition(int A[],int low,int high)
{
    int pivot=A[low],i=low+1,j=high,temp;

    do
    {
    while(A[i]<=pivot)
    {
        i++;
    }

    while(A[j]>pivot)
    {
        j--;
    }

    if(i<j)
    {
        temp=A[i];
        A[i]=A[j];
        A[j]=temp;
    }
    }
    while(i<j);

        temp=A[low];
        A[low]=A[j];
        A[j]=temp;

    return j;

}

void quick_sort(int A[],int low,int high)
{
    if(low<high)
    {
     int partition_index=partition(A,low,high);
     quick_sort(A,low,partition_index-1);
     quick_sort(A,partition_index+1,high);
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
    quick_sort(A,0,n-1);
    printArray(A,n);

    return 0;
}
