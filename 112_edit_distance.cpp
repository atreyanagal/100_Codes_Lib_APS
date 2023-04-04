//https://practice.geeksforgeeks.org/problems/edit-distance3702/1
//https://leetcode.com/problems/edit-distance/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int editDistance(string source, string destination) {
        // Code here
        int dp[source.size()+1][destination.size()+1];
        int n=source.size(),m=destination.size();
        for(int i=0;i<=n;i++)
            dp[i][0]=i;
        for(int i=0;i<=m;i++)
            dp[0][i]=i;
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                
                if(source[i-1]==destination[j-1])
                    dp[i][j]=dp[i-1][j-1];
                else{
                    dp[i][j]=min(dp[i-1][j],min(dp[i-1][j-1],dp[i][j-1]))+1;
                }
                
            }
        }
        return dp[n][m];
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string s1,s2;
//     int i,j;

//     cin>>s1>>s2;

//     int n=s1.size();
//     int m=s2.size();
    
//     int dp[n+1][m+1];

//     for(i=0;i<=n;i++)
//     {
//         dp[i][0]=i;
//     }

//     for(i=0;i<=m;i++)
//     {
//         dp[0][i]=i;
//     }

//     for(i=1;i<=n;i++)
//     {
//         for(j=1;j<=m;j++)
//         {
//             if(s1[i-1]==s2[j-1])
//             dp[i][j]=dp[i-1][j-1];

//             else
//             {
//                 dp[i][j]=min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]))+1;
//             }
//         }
//     }

//     cout<<dp[n][m];
    
//     return 0;
// }



