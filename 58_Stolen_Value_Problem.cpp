//https://practice.geeksforgeeks.org/problems/stickler-theif-1587115621/1?page=3&curated[]=7&sortBy=submissions
//https://leetcode.com/problems/house-robber/description/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int a[], int n)
    {
        int dp[n+1];
        dp[0]=0;
        dp[1]=a[0];
        for(int i=2;i<=n;i++){
            dp[i]=max(dp[i-1],dp[i-2]+a[i-1]);
        }
        return dp[n];
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking number of houses
		int n;
		cin>>n;
		int a[n];
		
		//inserting money of each house in the array
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		//calling function FindMaxSum()
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}

// } Driver Code Ends

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n,i;

//     cin>>n;

//     int a[n],dp[n+1];

//     for(i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }

//     dp[0]=1;
//     dp[1]=a[0];

//    for(i=2;i<=n;i++)
//     {
//         dp[i]=max(dp[i-1],dp[i-2]+a[i-1]);
//     } 

//     cout<<dp[n];

//     return 0;
// }

// class Solution {
// public:
//     int rob(vector<int>& a) {

//         int n=a.size(),dp[n+1];
//         dp[0]=0;
//         dp[1]=a[0];
//         for(int i=2;i<=n;i++){
//             dp[i]=max(dp[i-1],dp[i-2]+a[i-1]);
//         }
//         return dp[n];
        
//     }
// };