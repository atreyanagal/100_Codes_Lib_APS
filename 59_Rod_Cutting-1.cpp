//Rod cutting 1
//Cutting rod into "k" pieces to obtain maximum product
//https://www.geeksforgeeks.org/maximum-product-cutting-dp-36/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin>>n;

    int dp[n+1];  

    for(int i=0;i<=n;i++)
    {
        dp[i]=0;
    }

    for(int i=2;i<=n;i++)
    {
        
        for(int j=1;j<=(i/2);j++)
        {
            dp[i]=max(dp[i],max(j*(i-j),j*dp[i-j]));
        }
    }

    cout<<dp[n];

    return 0;
}