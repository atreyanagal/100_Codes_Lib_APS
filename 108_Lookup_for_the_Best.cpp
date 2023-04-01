//https://www.hackerrank.com/contests/array-query-2023/challenges/lookup-for-the-best

#include<bits/stdc++.h>
using namespace std;

int main() 
{

    long long num;

    cin>>num;

    long long arr[num];

    for(long long i=0;i<num;i++)
        cin>>arr[i];
    
    int dp[40];

    for(int i=0;i<40;i++)
    {
        dp[i]=0;
    }
    
    int t=0, s=0;

    for(int i=0;i<num;i++)
    {
        t=0;

        for(int j=0;arr[i]>0;j++)
        {
            dp[j]=arr[i]%2;
            arr[i]=arr[i]/2;
            t++;
        }
        
        for(int i=0;i<t;i++)
        {
            if(dp[i]==1)
            {
                s=s+dp[i];
            }
        }
    }
    
    cout<<s<<"\n";

    return 0;
}