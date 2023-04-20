#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    int i,j;

    cin>>s1>>s2;

    int n=s1.size();
    int m=s2.size();
    
    int dp[n+1][m+1];

    for(i=0;i<=n;i++)
    {
        dp[i][0]=i;
    }

    for(i=0;i<=m;i++)
    {
        dp[0][i]=i;
    }

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(s1[i-1]==s2[j-1])
            dp[i][j]=dp[i-1][j-1]+1;

            else
            {
                dp[i][j]=min(dp[i-1][j],dp[i][j-1])+1;
            }
        }
    }

    cout<<dp[n][m];
    
    return 0;
}