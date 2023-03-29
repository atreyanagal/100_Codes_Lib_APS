//Program to sort the elements of array or bubble sort

#include<stdio.h>
void readarray(int[],int);
void printarray(int[],int);
void sort(int[],int);

int main()
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

    return 0;
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
    int i,j,t;

    for(i=0;i<=n-2;i++)
        {
           for(j=0;j<=n-i-2;j++)
           {
               if(a[j]>a[j+1])
               {
                   t=a[j];
                   a[j]=a[j+1];
                   a[j+1]=t;
               }
           }
        }
}

