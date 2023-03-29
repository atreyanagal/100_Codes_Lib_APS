//Program to implement brute force search

#include<stdio.h>
#include<string.h>

void brute_force(char str[],char pat[])
{
    int n,i,j,a,b,flag=0;

    a=strlen(str);
    b=strlen(pat);

    for(i=0;i<a;)
    {
        for(j=0;j<b;j++)
        {
            if(str[i+j]!=pat[j])
                break;
        }

        if(j==b)
        {
            printf("Match found at index:%d",i);
            i=i+b;
            flag=1;
        }

        else if(j==0)
            i++;

        else
            i=i+j;
    }

    if(flag==0)
        printf("No match found");
}

int main()
{
    char str[50],pat[50];

    printf("Enter the string:");
    gets(str);

    printf("Enter the pattern:");
    gets(pat);

    brute_force(str,pat);
}
