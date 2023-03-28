//Game array

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,count=1;

    cin>>n;

    int a[n];

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    for(i=0;i<n-1;i++)
    {
        if(a[i]<a[i+1])
        {
            count++;
        }
    }

    if(count%2==0)
    {
        cout<<"P2 wins the game";
    }

    else
    {
        cout<<"P1 wins the game";
    }


    return 0;
}

