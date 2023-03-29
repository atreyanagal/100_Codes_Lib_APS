//Program to sort the elements of array or insertion sort
#include<stdio.h>
void readarray(int[],int);
void printarray(int[],int);
void sort(int[],int);

void main()
{
    int n,a[100];

    printf("Enter the number of elements=");
    scanf("%d",&n);
    readarray(a,n);
    printf("Array before sorting=");
    printarray(a,n);
    sort(a,n);
    printf("\nArray after sorting=");
    printarray(a,n);
}

void readarray(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
}

void printarray(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}

void sort(int a[],int n)
{
    int i,v,j;

    for(i=1;i<=n-1;i++)
    {
        v=a[i];
        j=i-1;

        while(j>=0 && a[j]>v)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=v;
    }
}


