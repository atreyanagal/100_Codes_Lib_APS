//Longest Common Subsequences 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;

    cin>>s1>>s2;

    int len1=s1.length();
    int len2=s2.length();
    
    int LCS[len1+1][len2+1];

    //initilize 1st row and column to 0
    for(int i=0;i<=len1;i++)
    {
        for(int j=0;j<=len2;j++)
        {
            LCS[i][0]=0;
            LCS[0][j]=0;
        }
    }

    for(int i=1;i<=len1;i++)
    {
        for(int j=1;j<=len2;j++)
        {
            if(s1[i-1]==s2[j-1])
            {
                LCS[i][j]=LCS[i-1][j-1]+1;
            }
            else
            {
                LCS[i][j]=max(LCS[i-1][j],LCS[i][j-1]);
            }
        }
    }

    cout<<LCS[len1][len2];

    return 0;
}