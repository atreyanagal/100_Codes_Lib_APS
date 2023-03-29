//Program to sort the elements of array or selection sort

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
    int i,j,min,t;

    for(i=0;i<=n-2;i++)
    {
        min=i;
           for(j=i+1;j<=n-1;j++)
           {
               if(a[j]<a[min])
                min=j;
           }
                   t=a[i];
                   a[i]=a[min];
                   a[min]=t;
        }
}


