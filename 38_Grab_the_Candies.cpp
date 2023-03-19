//https://codeforces.com/contest/1807/problem/B

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,t,i,esum=0,osum=0;
 
    cin>>t;
 
    while(t--)
    {
        esum=0,osum=0;
        cin>>n;
        int a[n];
 
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
 
        for(i=0;i<n;i++)
        {
            if(a[i]%2 == 0)
            {
                esum+=a[i];
            }
 
            else
                osum+=a[i];
 
        }
        
        if(esum>osum)
        cout<<"YES"<<endl;
 
        else
        cout<<"NO"<<endl;
        
    }
    
    return 0;
}