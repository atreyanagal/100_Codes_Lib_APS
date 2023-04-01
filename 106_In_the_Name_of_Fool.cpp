//https://www.hackerrank.com/contests/fools-2023/challenges/in-the-name-of-fool/problem

#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int num,i;
    
    cin>>num;
    
    map<string,int> mp;
    
    string str;
    
    for(i=0;i<num;i++)
    {
        cin>>str;
        mp[str]++;
    }
    
    int n;
    
    cin>>n;
    
    for(i=0;i<n;i++)
    {
        cin>>str;
        
        cout<<mp[str]<<endl;
    }
    
    return 0;
}