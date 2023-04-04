//https://cses.fi/problemset/task/1635/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,i,j,sum;

    cin>>n>>sum;

    long long int a[n];

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    long long int dp[sum+1];
    dp[0]=1;

    for(i=1;i<=sum;i++)
    {
        dp[i]=0;
    }

    long long int mod=1e9+7;

    for(i=1;i<=sum;i++)
    {
        for(j=0;j<n;j++)
        {
            if((i-a[j])>=0)
            {
                dp[i]+=dp[i-a[j]];
            }
        }

        dp[i]%=mod;
    }

    cout<<dp[sum]%mod;
    
    return 0;
}