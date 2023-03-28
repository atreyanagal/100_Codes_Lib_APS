//https://cses.fi/problemset/task/1097/
//https://www.hackerrank.com/contests/aps-screening-2019/challenges/maximized-hiring

#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll dp[5001][5001];
 
ll helper(vector<ll>&a,int i,int j){
    if(dp[i][j]!=INT_MIN)
        return dp[i][j];
    if(i>j)
        return 0;
    ll one=a[i]+min(helper(a,i+2,j),helper(a,i+1,j-1));
    ll two=a[j]+min(helper(a,i+1,j-1),helper(a,i,j-2));
 
    dp[i][j]=max(one,two);
    return dp[i][j];
}
 
int main()
{
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++)
            dp[i][j]=INT_MIN;
    }
    
    cout<<helper(a,0,n-1);
    return 0;
}