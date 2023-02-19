// optimal assignment of n jobs to n people
/*
Input -
3
3 2 7
5 1 3
2 7 2
*/

/*
Output - 
0 3 2 4 7 6 5 6

6
*/

#include<bits/stdc++.h>
using namespace std;
#define inf 999999

int main()
{
    int i,j,n,mask;

    cout<<"Enter n value: ";
    
    cin>>n;

    int cost[n][n],dp[2<<n];
    
    cout<<"Enter the values of cost matrix: "<<endl;
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>cost[i][j];
        }
    }  

    for(i=0;i<(2<<n-1);i++)
    {
        dp[i]=inf;
    }

    dp[0]=0;

    for(mask=0;mask<(2<<n-1);mask++)
    {
        int x=__builtin_popcount(mask);

        for(j=0;j<n;j++)
        {
            if(!(mask & (1 << j)))
            {
                dp[mask|1<<j]=min(dp[mask|1<<j],(dp[mask]+cost[x][j]));
            }
        }
    }

    for(int i=0;i<(2<<n-1);i++)
        cout<<dp[i]<<" ";

    cout<<endl;

    cout<<dp[(2<<n-1)-1];

    return 0;
}