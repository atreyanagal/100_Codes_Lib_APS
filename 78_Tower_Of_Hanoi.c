#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of disks=");
    scanf("%d",&n);
    tower(n,'A','C','B');
    return 0;
}

void tower(int n, char from, char to, char aux)
{
    if(n==1)
        printf("Disk 1 is moved from %c to %c\n",from,to);
    else
    {
    tower(n-1,from,aux,to);
    printf("Disk %d is moved from %c to %c\n",n,from,to);
    tower(n-1,aux,to,from);
    }
}
