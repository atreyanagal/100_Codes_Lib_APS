// https://cses.fi/problemset/task/1634/
// https://practice.geeksforgeeks.org/problems/number-of-coins1824/1

// Minimizing Coins
// Given N coins and a Sum,
// return the minimal number of coins required to make Sum ,
// else return -1

#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll minimize_coin(ll n, ll sum, vector<ll>coins){
    vector<ll>dp(sum+1,INT_MAX);
    dp[0]=0;
    
    for(ll i=1;i<=sum;i++){
        for(ll j=0;j<n;j++){
            if((i-coins[j])>=0 && dp[i-coins[j]]!=INT_MAX){
                dp[i]=min(dp[i],dp[i-coins[j]]+1);
            }
        }
    }
    if(dp[sum]==INT_MAX)
        return -1;
    return dp[sum];
}


int main(){
    ll n,sum;
    cin>>n>>sum;
    vector<ll>coins(n);
    for(int i=0;i<n;i++)
        cin>>coins[i];
    cout<<minimize_coin(n,sum,coins);
    return 0;
}



//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
#define ll long long
	public:
	int minCoins(int coins[], int n, int sum) 
	{ 
	    vector<ll>dp(sum+1,INT_MAX);
	    dp[0]=0;
	    
	    for(ll i=1;i<=sum;i++){
	        for(ll j=0;j<n;j++){
	            if((i-coins[j])>=0 && dp[i-coins[j]]!=INT_MAX){
	                dp[i]=min(dp[i],dp[i-coins[j]]+1);
	            }
	        }
	    }
	    if(dp[sum]==INT_MAX)
	        return -1;
	    return dp[sum];
	}
	  
};

//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends