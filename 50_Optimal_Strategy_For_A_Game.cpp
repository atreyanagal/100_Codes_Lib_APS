//https://practice.geeksforgeeks.org/problems/optimal-strategy-for-a-game-1587115620/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//Function to find the maximum possible amount of money we can win.
class Solution{
    public:
    
    #define ll long long
    
    ll dp[1001][1001];
    
    ll helper(int a[],int i,int j){
        if(dp[i][j]!=INT_MIN)
            return dp[i][j];
        if(i>j)
            return 0;
        ll one=a[i]+min(helper(a,i+2,j),helper(a,i+1,j-1));
        ll two=a[j]+min(helper(a,i+1,j-1),helper(a,i,j-2));
     
        dp[i][j]=max(one,two);
        return dp[i][j];
    }
    
    ll maximumAmount(int arr[], int n){
        for(int i=0;i<=n;i++){
            for(int j=0;j<=n;j++)
                dp[i][j]=INT_MIN;
        }
        return helper(arr,0,n-1);
    }
};

//{ Driver Code Starts.
int main() 
{
   
   	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		cout<< ob.maximumAmount(a,n)<<endl;
	}
	return 0;
}
// } Driver Code Ends