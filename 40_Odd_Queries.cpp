//https://codeforces.com/contest/1807/problem/D

#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    ll testcase;
    cin>>testcase;
 
    while(testcase--)
    {
        ll p,q,a,b,c,s1=0;
 
        cin>>p>>q;
 
        vector<ll> vec(p,0);
 
        ll arr[p];
 
        cin>>vec[0];

        arr[0]=vec[0];

        for(ll i=1;i<p;i++)
        {
            cin>>arr[i];
            vec[i]+=arr[i]+vec[i-1];
        }

        for(ll i=0;i<q;i++)
        {
            s1=0;

            cin>>a>>b>>c;

            s1=vec[b-1]-vec[a-1]+arr[a-1];
            s1=vec[p-1]-s1+(c*(b-a+1));

            if(s1%2)
            {
                cout<<"YES"<<endl;
            }

            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
 
    return 0;
}