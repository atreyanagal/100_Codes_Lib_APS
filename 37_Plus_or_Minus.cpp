//https://codeforces.com/contest/1807/problem/A

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int a,b,t,c;
 
    cin>>t;
 
    while(t--)
    {
        cin>>a>>b>>c;
 
        if((a+b) == c)
        {
            cout<<"+"<<endl;
        }
 
        else
        {
            cout<<"-"<<endl;
        }
    }
    
    return 0;
}