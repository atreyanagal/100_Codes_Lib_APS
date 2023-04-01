//https://www.hackerrank.com/contests/array-query-2023/challenges/fun-fair-queries

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define infinity 1e9

int minimum(int a , int b) 
{
    if(a<b)
    {
        return a; 
    } 
    else
    {
        return b;
    }
}


void Build(int node , int x , int y ,int arr[] , int trees[])
{
    if(x==y) 
    {
        trees[node] = arr[x];
        return ;
    }

    int t=(x+y)/2 ;

    Build(2*node,x,t,arr,trees) ;
    Build(2*node+1,t+1,y,arr,trees);

    trees[node]= minimum(trees[2*node],trees[2*node+1]);
    return ;
}

int Query(int node,int x,int y,int l,int r,int arr[],int trees[]) 
{
    if((y<l)||(r<x)) 
        return infinity ;

    if( (x >= l) && (y <= r)) 
        return trees[node];
    
    int mid=(x+y)/2 ;

    int q1=Query(2*node,x,mid,l,r,arr,trees) ;
    int q2 = Query((2*node)+1,mid+1,y,l,r,arr,trees);

    return minimum(q1 , q2);
}

int main() 
{
      int num,query,i;
    
    scanf("%d",&num);
    scanf("%d",&query);

    int arr[num],trees[4*num];

    for(i=0;i<num;i++)
        scanf("%d",&arr[i]);
    
    Build(1,0,num-1,arr,trees);

    for(i=0;i<query;i++)
    {
        int l , r; 

        scanf("%d",&l);
        scanf("%d",&r);

        int ans=Query(1,0,num-1,l,r,arr,trees);

        printf("%d\n",ans);
    }
    return 0;
}